(ns dna)
(use '[clojure.string :as s :only [replace]])

(defn to-rna [dna]
  (let [re-dna #"G|C|T|A"
        dna-valid? (every? #{\G \C \T \A} dna)
        rna-to-dna-map {"G" "C",
                        "C" "G",
                        "T" "A",
                        "A" "U"}]
    (assert dna-valid?)
    (if dna-valid?
      (s/replace dna re-dna rna-to-dna-map))))
