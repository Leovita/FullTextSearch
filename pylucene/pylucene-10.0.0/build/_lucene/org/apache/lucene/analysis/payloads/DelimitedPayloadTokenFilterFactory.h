#ifndef org_apache_lucene_analysis_payloads_DelimitedPayloadTokenFilterFactory_H
#define org_apache_lucene_analysis_payloads_DelimitedPayloadTokenFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class ResourceLoaderAware;
        class ResourceLoader;
      }
      namespace analysis {
        class TokenStream;
        namespace payloads {
          class DelimitedPayloadTokenFilter;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
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
        namespace payloads {

          class DelimitedPayloadTokenFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_6a7e23584beb7c0f,
              mid_create_36e3da7a822124d7,
              mid_inform_4ba602df53b96765,
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
