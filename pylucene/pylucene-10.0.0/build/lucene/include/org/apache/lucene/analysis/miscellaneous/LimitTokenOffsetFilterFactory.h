#ifndef org_apache_lucene_analysis_miscellaneous_LimitTokenOffsetFilterFactory_H
#define org_apache_lucene_analysis_miscellaneous_LimitTokenOffsetFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

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
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {

          class LimitTokenOffsetFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_6a7e23584beb7c0f,
              mid_create_f3e050e998938273,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LimitTokenOffsetFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LimitTokenOffsetFilterFactory(const LimitTokenOffsetFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *CONSUME_ALL_TOKENS_KEY;
            static ::java::lang::String *MAX_START_OFFSET;
            static ::java::lang::String *NAME;

            LimitTokenOffsetFilterFactory();
            LimitTokenOffsetFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::TokenStream create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
          extern PyType_Def PY_TYPE_DEF(LimitTokenOffsetFilterFactory);
          extern PyTypeObject *PY_TYPE(LimitTokenOffsetFilterFactory);

          class t_LimitTokenOffsetFilterFactory {
          public:
            PyObject_HEAD
            LimitTokenOffsetFilterFactory object;
            static PyObject *wrap_Object(const LimitTokenOffsetFilterFactory&);
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
