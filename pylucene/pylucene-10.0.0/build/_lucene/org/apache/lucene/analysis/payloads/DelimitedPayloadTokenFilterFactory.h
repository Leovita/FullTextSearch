#ifndef org_apache_lucene_analysis_payloads_DelimitedPayloadTokenFilterFactory_H
#define org_apache_lucene_analysis_payloads_DelimitedPayloadTokenFilterFactory_H

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
      namespace util {
        class ResourceLoader;
        class ResourceLoaderAware;
      }
      namespace analysis {
        namespace payloads {
          class DelimitedPayloadTokenFilter;
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
        namespace payloads {

          class DelimitedPayloadTokenFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_79ba0f5a7d05e623,
              mid_create_c5c5aeb428b210d1,
              mid_inform_6addbf380886844e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DelimitedPayloadTokenFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DelimitedPayloadTokenFilterFactory(const DelimitedPayloadTokenFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *DELIMITER_ATTR;
            static ::java::lang::String *ENCODER_ATTR;
            static ::java::lang::String *NAME;

            DelimitedPayloadTokenFilterFactory();
            DelimitedPayloadTokenFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::payloads::DelimitedPayloadTokenFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
            void inform(const ::org::apache::lucene::util::ResourceLoader &) const;
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
        namespace payloads {
          extern PyType_Def PY_TYPE_DEF(DelimitedPayloadTokenFilterFactory);
          extern PyTypeObject *PY_TYPE(DelimitedPayloadTokenFilterFactory);

          class t_DelimitedPayloadTokenFilterFactory {
          public:
            PyObject_HEAD
            DelimitedPayloadTokenFilterFactory object;
            static PyObject *wrap_Object(const DelimitedPayloadTokenFilterFactory&);
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
