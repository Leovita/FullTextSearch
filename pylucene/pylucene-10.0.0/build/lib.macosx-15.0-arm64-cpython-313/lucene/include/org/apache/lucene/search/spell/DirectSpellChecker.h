#ifndef org_apache_lucene_search_spell_DirectSpellChecker_H
#define org_apache_lucene_search_spell_DirectSpellChecker_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
        class IndexReader;
      }
      namespace search {
        namespace spell {
          class SuggestMode;
          class SuggestWord;
          class StringDistance;
        }
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
              mid_init$_3720c61b0679eb3e,
              mid_getAccuracy_9b6c3480dac00edf,
              mid_getComparator_39238840448c1807,
              mid_getDistance_478505d6ee0aee8d,
              mid_getLowerCaseTerms_947277eca0748c4e,
              mid_getMaxEdits_20fbf7565993c3d7,
              mid_getMaxInspections_20fbf7565993c3d7,
              mid_getMaxQueryFrequency_9b6c3480dac00edf,
              mid_getMaxQueryLength_20fbf7565993c3d7,
              mid_getMinPrefix_20fbf7565993c3d7,
              mid_getMinQueryLength_20fbf7565993c3d7,
              mid_getThresholdFrequency_9b6c3480dac00edf,
              mid_setAccuracy_c771a95b0227fb6a,
              mid_setComparator_480edaf434ebe52f,
              mid_setDistance_c1f993af6d9506f9,
              mid_setLowerCaseTerms_b110fc3a58c081ab,
              mid_setMaxEdits_540b2b23d51b1efd,
              mid_setMaxInspections_540b2b23d51b1efd,
              mid_setMaxQueryFrequency_c771a95b0227fb6a,
              mid_setMaxQueryLength_540b2b23d51b1efd,
              mid_setMinPrefix_540b2b23d51b1efd,
              mid_setMinQueryLength_540b2b23d51b1efd,
              mid_setThresholdFrequency_c771a95b0227fb6a,
              mid_suggestSimilar_8a76df3f949d02de,
              mid_suggestSimilar_8920e25923bc88d8,
              mid_suggestSimilar_afc872a0f570f5ca,
              mid_suggestSimilar_d9828c2ed6636a54,
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
