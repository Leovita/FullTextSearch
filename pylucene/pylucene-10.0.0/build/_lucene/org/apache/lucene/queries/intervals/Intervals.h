#ifndef org_apache_lucene_queries_intervals_Intervals_H
#define org_apache_lucene_queries_intervals_Intervals_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        namespace automaton {
          class CompiledAutomaton;
        }
      }
      namespace queries {
        namespace intervals {
          class IntervalsSource;
        }
      }
      namespace analysis {
        class Analyzer;
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
    namespace function {
      class Predicate;
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
              mid_after_95887820af6517ce,
              mid_analyzedText_a497f9ad876a2f16,
              mid_analyzedText_12cf6f0feb886140,
              mid_atLeast_478b242491b53db9,
              mid_before_95887820af6517ce,
              mid_containedBy_95887820af6517ce,
              mid_containing_95887820af6517ce,
              mid_extend_bedf5b1ed8efd5c0,
              mid_fixField_1e7f311568cd9aba,
              mid_fuzzyTerm_3619722b207d69b8,
              mid_fuzzyTerm_bd1fdb0c1eccc51f,
              mid_maxgaps_2c0e4aada43e6ea6,
              mid_maxwidth_2c0e4aada43e6ea6,
              mid_multiterm_e02449548929a0ae,
              mid_multiterm_d6c9116ab43e6de2,
              mid_noIntervals_13784bcfdd7c6eeb,
              mid_nonOverlapping_95887820af6517ce,
              mid_notContainedBy_95887820af6517ce,
              mid_notContaining_95887820af6517ce,
              mid_notWithin_087a6eea6a9cda94,
              mid_or_4c2d30cbc615f5f1,
              mid_or_41f7cc81c030b89c,
              mid_or_ed0360211b6fa4ec,
              mid_or_7ae511ae963ed8fa,
              mid_ordered_4c2d30cbc615f5f1,
              mid_overlapping_95887820af6517ce,
              mid_phrase_47ab57fddb95dd49,
              mid_phrase_4c2d30cbc615f5f1,
              mid_prefix_a4d1a28c5b7cfb3d,
              mid_prefix_4691acbb097c0205,
              mid_range_324448fec09f7bfb,
              mid_range_360bab1b1a28cb39,
              mid_regexp_a4d1a28c5b7cfb3d,
              mid_regexp_4691acbb097c0205,
              mid_term_13784bcfdd7c6eeb,
              mid_term_a4d1a28c5b7cfb3d,
              mid_term_33ee19052c5cc88a,
              mid_term_319fc040fae74909,
              mid_unordered_4c2d30cbc615f5f1,
              mid_unorderedNoOverlaps_95887820af6517ce,
              mid_wildcard_a4d1a28c5b7cfb3d,
              mid_wildcard_4691acbb097c0205,
              mid_within_087a6eea6a9cda94,
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
