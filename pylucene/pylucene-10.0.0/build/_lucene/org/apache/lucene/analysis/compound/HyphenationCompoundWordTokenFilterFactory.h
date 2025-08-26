#ifndef org_apache_lucene_analysis_compound_HyphenationCompoundWordTokenFilterFactory_H
#define org_apache_lucene_analysis_compound_HyphenationCompoundWordTokenFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenFilter;
        class TokenStream;
      }
      namespace util {
        class ResourceLoaderAware;
        class ResourceLoader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
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
        namespace compound {

          class HyphenationCompoundWordTokenFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_6a7e23584beb7c0f,
              mid_create_4937dab34440a7cc,
              mid_inform_4ba602df53b96765,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HyphenationCompoundWordTokenFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HyphenationCompoundWordTokenFilterFactory(const HyphenationCompoundWordTokenFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            HyphenationCompoundWordTokenFilterFactory();
            HyphenationCompoundWordTokenFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::TokenFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace compound {
          extern PyType_Def PY_TYPE_DEF(HyphenationCompoundWordTokenFilterFactory);
          extern PyTypeObject *PY_TYPE(HyphenationCompoundWordTokenFilterFactory);

          class t_HyphenationCompoundWordTokenFilterFactory {
          public:
            PyObject_HEAD
            HyphenationCompoundWordTokenFilterFactory object;
            static PyObject *wrap_Object(const HyphenationCompoundWordTokenFilterFactory&);
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
