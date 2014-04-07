(ns bob)
(use '[clojure.string :only [blank? trim upper-case]])

(defn response-for [message]
  (let [shouting? (and (= message (upper-case message))
                       (not (nil? (re-seq #"[A-Z]" message))))
        silent? (blank? message)
        question? (= (last message) \?)]
    (cond
      silent? "Fine. Be that way!"
      shouting? "Woah, chill out!"
      question? "Sure."
      :else "Whatever.")))
