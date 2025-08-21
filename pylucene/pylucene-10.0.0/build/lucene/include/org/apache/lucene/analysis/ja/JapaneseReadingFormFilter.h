#ifndef org_apache_lucene_analysis_ja_JapaneseReadingFormFilter_H
#define org_apache_lucene_analysis_ja_JapaneseReadingFormFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {

          class JapaneseReadingFormFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_7d17c8514b99ffc6,
              mid_init$_303f0251e5222802,
              mid_incrementToken_947277eca0748c4e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JapaneseReadingFormFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JapaneseReadingFormFilter(const JapaneseReadingFormFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            JapaneseReadingFormFilter(const ::org::apache::lucene::analysis::TokenStream &);
            JapaneseReadingFormFilter(const ::org::apache::lucene::analysis::TokenStream &, jboolean);

            jboolean incrementToken() const;
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
          extern PyType_Def PY_TYPE_DEF(JapaneseReadingFormFilter);
          extern PyTypeObject *PY_TYPE(JapaneseReadingFormFilter);

          class t_JapaneseReadingFormFilter {
          public:
            PyObject_HEAD
            JapaneseReadingFormFilter object;
            static PyObject *wrap_Object(const JapaneseReadingFormFilter&);
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
