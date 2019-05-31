module Jekyll
  class HelloWorldPage < Page
    def initialize(site, base, dir)
      @site, @base, @dir = site, base, dir
      @name = "solutions.html"
      
      sols = {}

      probs = site.data["problem"]
      for p in probs
        # next if not p["official"]
        for s in p["solutions"] + p["another_solutions"]
          sols[s] = [] if not sols.has_key?(s)
          sols[s].push(p)
        end
      end

      sols.each do |key, probs|
        probs.sort! {|p| p["score"] }
        probs.reverse!
      end

      self.process(@name)
      self.read_yaml(File.join(base, '_layouts'), 'solutions.html')
      self.data["title"] = "解法一覧 - ぺんぎんノート"
      self.data["solutions"] = sols
    end
  end

  class HelloWorldGenerator < Generator
    safe true

    def generate(site)
      site.pages << HelloWorldPage.new(site, site.source, "/")
    end
  end
end
