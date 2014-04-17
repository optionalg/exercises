(reduce + (filter (fn [i] (or (= (rem i 3) 0) (= (rem i 5) 0))) (range 1 1000)))
