#ifndef org_apache_lucene_analysis_miscellaneous_RemoveDuplicatesTokenFilterFactory_H
#define org_apache_lucene_analysis_miscellaneous_RemoveDuplicatesTokenFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Map;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {
          class RemoveDuplicatesTokenFilter;
        }
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

          class RemoveDuplicatesTokenFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_79ba0f5a7d05e623,
              mid_create_b2222ad37c0f562a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RemoveDuplicatesTokenFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RemoveDuplicatesTokenFilterFactory(const RemoveDuplicatesTokenFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            RemoveDuplicatesTokenFilterFactory();
            RemoveDuplicatesTokenFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::miscellaneous::RemoveDuplicatesTokenFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
          extern PyType_Def PY_TYPE_DEF(RemoveDuplicatesTokenFilterFactory);
          extern PyTypeObject *PY_TYPE(RemoveDuplicatesTokenFilterFactory);

          class t_RemoveDuplicatesTokenFilterFactory {
          public:
            PyObject_HEAD
            RemoveDuplicatesTokenFilterFactory object;
            static PyObject *wrap_Object(const RemoveDuplicatesTokenFilterFactory&);
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
