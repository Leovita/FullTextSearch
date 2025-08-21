#ifndef org_apache_lucene_analysis_ja_JapaneseIterationMarkCharFilter_H
#define org_apache_lucene_analysis_ja_JapaneseIterationMarkCharFilter_H

#include "org/apache/lucene/analysis/CharFilter.h"

namespace java {
  namespace io {
    class Reader;
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {

          class JapaneseIterationMarkCharFilter : public ::org::apache::lucene::analysis::CharFilter {
           public:
            enum {
              mid_init$_fa55492f0f5d7f31,
              mid_init$_bd0c54416fae8129,
              mid_read_20fbf7565993c3d7,
              mid_read_db543c1e894f3140,
              mid_correct_3c9bba330f083871,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JapaneseIterationMarkCharFilter(jobject obj) : ::org::apache::lucene::analysis::CharFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JapaneseIterationMarkCharFilter(const JapaneseIterationMarkCharFilter& obj) : ::org::apache::lucene::analysis::CharFilter(obj) {}

            static jboolean NORMALIZE_KANA_DEFAULT;
            static jboolean NORMALIZE_KANJI_DEFAULT;

            JapaneseIterationMarkCharFilter(const ::java::io::Reader &);
            JapaneseIterationMarkCharFilter(const ::java::io::Reader &, jboolean, jboolean);

            jint read() const;
            jint read(const JArray< jchar > &, jint, jint) const;
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
      namespace analysis {
        namespace ja {
          extern PyType_Def PY_TYPE_DEF(JapaneseIterationMarkCharFilter);
          extern PyTypeObject *PY_TYPE(JapaneseIterationMarkCharFilter);

          class t_JapaneseIterationMarkCharFilter {
          public:
            PyObject_HEAD
            JapaneseIterationMarkCharFilter object;
            static PyObject *wrap_Object(const JapaneseIterationMarkCharFilter&);
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
