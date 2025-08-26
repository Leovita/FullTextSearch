#ifndef org_apache_lucene_queries_intervals_Intervals_H
#define org_apache_lucene_queries_intervals_Intervals_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Predicate;
    }
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        class Analyzer;
      }
      namespace util {
        namespace automaton {
          class CompiledAutomaton;
        }
        class BytesRef;
      }
      namespace queries {
        namespace intervals {
          class IntervalsSource;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace intervals {

          class Intervals : public ::java::lang::Object {
           public:
            enum {
              mid_after_95448879fffea048,
              mid_analyzedText_90a6dbdd40c367d4,
              mid_analyzedText_c9bdce7e8c928bfc,
              mid_atLeast_6132d2d91835f033,
              mid_before_95448879fffea048,
              mid_containedBy_95448879fffea048,
              mid_containing_95448879fffea048,
              mid_extend_003d792b7f8ca96d,
              mid_fixField_285a9f3a3a4a8afa,
              mid_fuzzyTerm_46d2ee2ec691491f,
              mid_fuzzyTerm_eac927e6e31d8e10,
              mid_maxgaps_64acad3980cf9a23,
              mid_maxwidth_64acad3980cf9a23,
              mid_multiterm_9ebf1f63634120a5,
              mid_multiterm_9f99ff05823a02b8,
              mid_noIntervals_c71767ca245ac396,
              mid_nonOverlapping_95448879fffea048,
              mid_notContainedBy_95448879fffea048,
              mid_notContaining_95448879fffea048,
              mid_notWithin_502bac542b811699,
              mid_or_ca36cbc8bde9efb5,
              mid_or_3787b432c743b36a,
              mid_or_a1c73ffa70101246,
              mid_or_a08734c46f0d63ec,
              mid_ordered_ca36cbc8bde9efb5,
              mid_overlapping_95448879fffea048,
              mid_phrase_af359834b14402c1,
              mid_phrase_ca36cbc8bde9efb5,
              mid_prefix_3dbf5823592ccf8e,
              mid_prefix_0be16607f089d510,
              mid_range_0e39f553513062cc,
              mid_range_c15f8b0279f93121,
              mid_regexp_3dbf5823592ccf8e,
              mid_regexp_0be16607f089d510,
              mid_term_c71767ca245ac396,
              mid_term_3dbf5823592ccf8e,
              mid_term_d2470774f49429d8,
              mid_term_aefe36a771636f6b,
              mid_unordered_ca36cbc8bde9efb5,
              mid_unorderedNoOverlaps_95448879fffea048,
              mid_wildcard_3dbf5823592ccf8e,
              mid_wildcard_0be16607f089d510,
              mid_within_502bac542b811699,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Intervals(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Intervals(const Intervals& obj) : ::java::lang::Object(obj) {}

            static jint DEFAULT_MAX_EXPANSIONS;

            static ::org::apache::lucene::queries::intervals::IntervalsSource after(const ::org::apache::lucene::queries::intervals::IntervalsSource &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource analyzedText(const ::org::apache::lucene::analysis::TokenStream &, jint, jboolean);
            static ::org::apache::lucene::queries::intervals::IntervalsSource analyzedText(const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &, const ::java::lang::String &, jint, jboolean);
            static ::org::apache::lucene::queries::intervals::IntervalsSource atLeast(jint, const JArray< ::org::apache::lucene::queries::intervals::IntervalsSource > &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource before(const ::org::apache::lucene::queries::intervals::IntervalsSource &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource containedBy(const ::org::apache::lucene::queries::intervals::IntervalsSource &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource containing(const ::org::apache::lucene::queries::intervals::IntervalsSource &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource extend(const ::org::apache::lucene::queries::intervals::IntervalsSource &, jint, jint);
            static ::org::apache::lucene::queries::intervals::IntervalsSource fixField(const ::java::lang::String &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource fuzzyTerm(const ::java::lang::String &, jint);
            static ::org::apache::lucene::queries::intervals::IntervalsSource fuzzyTerm(const ::java::lang::String &, jint, jint, jboolean, jint);
            static ::org::apache::lucene::queries::intervals::IntervalsSource maxgaps(jint, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource maxwidth(jint, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource multiterm(const ::org::apache::lucene::util::automaton::CompiledAutomaton &, const ::java::lang::String &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource multiterm(const ::org::apache::lucene::util::automaton::CompiledAutomaton &, jint, const ::java::lang::String &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource noIntervals(const ::java::lang::String &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource nonOverlapping(const ::org::apache::lucene::queries::intervals::IntervalsSource &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource notContainedBy(const ::org::apache::lucene::queries::intervals::IntervalsSource &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource notContaining(const ::org::apache::lucene::queries::intervals::IntervalsSource &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource notWithin(const ::org::apache::lucene::queries::intervals::IntervalsSource &, jint, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource or$(const JArray< ::org::apache::lucene::queries::intervals::IntervalsSource > &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource or$(const ::java::util::List &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource or$(jboolean, const JArray< ::org::apache::lucene::queries::intervals::IntervalsSource > &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource or$(jboolean, const ::java::util::List &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource ordered(const JArray< ::org::apache::lucene::queries::intervals::IntervalsSource > &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource overlapping(const ::org::apache::lucene::queries::intervals::IntervalsSource &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource phrase(const JArray< ::java::lang::String > &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource phrase(const JArray< ::org::apache::lucene::queries::intervals::IntervalsSource > &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource prefix(const ::org::apache::lucene::util::BytesRef &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource prefix(const ::org::apache::lucene::util::BytesRef &, jint);
            static ::org::apache::lucene::queries::intervals::IntervalsSource range(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &, jboolean, jboolean);
            static ::org::apache::lucene::queries::intervals::IntervalsSource range(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &, jboolean, jboolean, jint);
            static ::org::apache::lucene::queries::intervals::IntervalsSource regexp(const ::org::apache::lucene::util::BytesRef &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource regexp(const ::org::apache::lucene::util::BytesRef &, jint);
            static ::org::apache::lucene::queries::intervals::IntervalsSource term(const ::java::lang::String &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource term(const ::org::apache::lucene::util::BytesRef &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource term(const ::java::lang::String &, const ::java::util::function::Predicate &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource term(const ::org::apache::lucene::util::BytesRef &, const ::java::util::function::Predicate &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource unordered(const JArray< ::org::apache::lucene::queries::intervals::IntervalsSource > &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource unorderedNoOverlaps(const ::org::apache::lucene::queries::intervals::IntervalsSource &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource wildcard(const ::org::apache::lucene::util::BytesRef &);
            static ::org::apache::lucene::queries::intervals::IntervalsSource wildcard(const ::org::apache::lucene::util::BytesRef &, jint);
            static ::org::apache::lucene::queries::intervals::IntervalsSource within(const ::org::apache::lucene::queries::intervals::IntervalsSource &, jint, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace intervals {
          extern PyType_Def PY_TYPE_DEF(Intervals);
          extern PyTypeObject *PY_TYPE(Intervals);

          class t_Intervals {
          public:
            PyObject_HEAD
            Intervals object;
            static PyObject *wrap_Object(const Intervals&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
