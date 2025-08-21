#ifndef org_apache_lucene_analysis_miscellaneous_LimitTokenPositionFilterFactory_H
#define org_apache_lucene_analysis_miscellaneous_LimitTokenPositionFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class String;
    class Class;
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

          class LimitTokenPositionFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_79ba0f5a7d05e623,
              mid_create_2ec4d1726b35d478,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LimitTokenPositionFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LimitTokenPositionFilterFactory(const LimitTokenPositionFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *CONSUME_ALL_TOKENS_KEY;
            static ::java::lang::String *MAX_TOKEN_POSITION_KEY;
            static ::java::lang::String *NAME;

            LimitTokenPositionFilterFactory();
            LimitTokenPositionFilterFactory(const ::java::util::Map &);

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
          extern PyType_Def PY_TYPE_DEF(LimitTokenPositionFilterFactory);
          extern PyTypeObject *PY_TYPE(LimitTokenPositionFilterFactory);

          class t_LimitTokenPositionFilterFactory {
          public:
            PyObject_HEAD
            LimitTokenPositionFilterFactory object;
            static PyObject *wrap_Object(const LimitTokenPositionFilterFactory&);
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
