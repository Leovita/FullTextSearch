#ifndef org_apache_lucene_analysis_miscellaneous_TypeAsSynonymFilter_H
#define org_apache_lucene_analysis_miscellaneous_TypeAsSynonymFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Set;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {

          class TypeAsSynonymFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_7d17c8514b99ffc6,
              mid_init$_d99a6a0dc69b5152,
              mid_init$_b4a2c13559d179d6,
              mid_incrementToken_947277eca0748c4e,
              mid_reset_3720c61b0679eb3e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TypeAsSynonymFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TypeAsSynonymFilter(const TypeAsSynonymFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            TypeAsSynonymFilter(const ::org::apache::lucene::analysis::TokenStream &);
            TypeAsSynonymFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &);
            TypeAsSynonymFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &, const ::java::util::Set &, jint);

            jboolean incrementToken() const;
            void reset() const;
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
        namespace miscellaneous {
          extern PyType_Def PY_TYPE_DEF(TypeAsSynonymFilter);
          extern PyTypeObject *PY_TYPE(TypeAsSynonymFilter);

          class t_TypeAsSynonymFilter {
          public:
            PyObject_HEAD
            TypeAsSynonymFilter object;
            static PyObject *wrap_Object(const TypeAsSynonymFilter&);
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
