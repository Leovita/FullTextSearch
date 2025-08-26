#ifndef org_apache_lucene_analysis_miscellaneous_DelimitedTermFrequencyTokenFilterFactory_H
#define org_apache_lucene_analysis_miscellaneous_DelimitedTermFrequencyTokenFilterFactory_H

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
        class TokenStream;
        namespace miscellaneous {
          class DelimitedTermFrequencyTokenFilter;
        }
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

          class DelimitedTermFrequencyTokenFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_6a7e23584beb7c0f,
              mid_create_73fdb87b48d2a52d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DelimitedTermFrequencyTokenFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DelimitedTermFrequencyTokenFilterFactory(const DelimitedTermFrequencyTokenFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *DELIMITER_ATTR;
            static ::java::lang::String *NAME;

            DelimitedTermFrequencyTokenFilterFactory();
            DelimitedTermFrequencyTokenFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::miscellaneous::DelimitedTermFrequencyTokenFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
          extern PyType_Def PY_TYPE_DEF(DelimitedTermFrequencyTokenFilterFactory);
          extern PyTypeObject *PY_TYPE(DelimitedTermFrequencyTokenFilterFactory);

          class t_DelimitedTermFrequencyTokenFilterFactory {
          public:
            PyObject_HEAD
            DelimitedTermFrequencyTokenFilterFactory object;
            static PyObject *wrap_Object(const DelimitedTermFrequencyTokenFilterFactory&);
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
