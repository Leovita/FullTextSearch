#ifndef org_apache_lucene_search_spell_DirectSpellChecker_H
#define org_apache_lucene_search_spell_DirectSpellChecker_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {
          class SuggestMode;
          class StringDistance;
          class SuggestWord;
        }
      }
      namespace index {
        class IndexReader;
        class Term;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Comparator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {

          class DirectSpellChecker : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_getAccuracy_8b62236f0e4d0dbc,
              mid_getComparator_5cc89c689cd941fe,
              mid_getDistance_21d3be2e55fe7f08,
              mid_getLowerCaseTerms_9aa4f33e82ea333f,
              mid_getMaxEdits_bd89ce15dad49192,
              mid_getMaxInspections_bd89ce15dad49192,
              mid_getMaxQueryFrequency_8b62236f0e4d0dbc,
              mid_getMaxQueryLength_bd89ce15dad49192,
              mid_getMinPrefix_bd89ce15dad49192,
              mid_getMinQueryLength_bd89ce15dad49192,
              mid_getThresholdFrequency_8b62236f0e4d0dbc,
              mid_setAccuracy_675f4cb9a2529ee0,
              mid_setComparator_236c903ae32a3610,
              mid_setDistance_79704ae345a0bc97,
              mid_setLowerCaseTerms_f5dd97eebf6a215a,
              mid_setMaxEdits_8226bd0b0fc13dba,
              mid_setMaxInspections_8226bd0b0fc13dba,
              mid_setMaxQueryFrequency_675f4cb9a2529ee0,
              mid_setMaxQueryLength_8226bd0b0fc13dba,
              mid_setMinPrefix_8226bd0b0fc13dba,
              mid_setMinQueryLength_8226bd0b0fc13dba,
              mid_setThresholdFrequency_675f4cb9a2529ee0,
              mid_suggestSimilar_8e99d3cb12176e8c,
              mid_suggestSimilar_6b61a2820134a666,
              mid_suggestSimilar_b513906c31476f63,
              mid_suggestSimilar_ca181bbca2ba18f9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DirectSpellChecker(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DirectSpellChecker(const DirectSpellChecker& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::search::spell::StringDistance *INTERNAL_LEVENSHTEIN;

            DirectSpellChecker();

            jfloat getAccuracy() const;
            ::java::util::Comparator getComparator() const;
            ::org::apache::lucene::search::spell::StringDistance getDistance() const;
            jboolean getLowerCaseTerms() const;
            jint getMaxEdits() const;
            jint getMaxInspections() const;
            jfloat getMaxQueryFrequency() const;
            jint getMaxQueryLength() const;
            jint getMinPrefix() const;
            jint getMinQueryLength() const;
            jfloat getThresholdFrequency() const;
            void setAccuracy(jfloat) const;
            void setComparator(const ::java::util::Comparator &) const;
            void setDistance(const ::org::apache::lucene::search::spell::StringDistance &) const;
            void setLowerCaseTerms(jboolean) const;
            void setMaxEdits(jint) const;
            void setMaxInspections(jint) const;
            void setMaxQueryFrequency(jfloat) const;
            void setMaxQueryLength(jint) const;
            void setMinPrefix(jint) const;
            void setMinQueryLength(jint) const;
            void setThresholdFrequency(jfloat) const;
            JArray< ::org::apache::lucene::search::spell::SuggestWord > suggestSimilar(const ::org::apache::lucene::index::Term &, jint, const ::org::apache::lucene::index::IndexReader &) const;
            JArray< ::org::apache::lucene::search::spell::SuggestWord > suggestSimilar(const ::org::apache::lucene::index::Term &, jint, const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::spell::SuggestMode &) const;
            JArray< ::org::apache::lucene::search::spell::SuggestWord > suggestSimilar(const ::org::apache::lucene::index::Term &, jint, const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::spell::SuggestMode &, jfloat) const;
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
      namespace search {
        namespace spell {
          extern PyType_Def PY_TYPE_DEF(DirectSpellChecker);
          extern PyTypeObject *PY_TYPE(DirectSpellChecker);

          class t_DirectSpellChecker {
          public:
            PyObject_HEAD
            DirectSpellChecker object;
            static PyObject *wrap_Object(const DirectSpellChecker&);
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
