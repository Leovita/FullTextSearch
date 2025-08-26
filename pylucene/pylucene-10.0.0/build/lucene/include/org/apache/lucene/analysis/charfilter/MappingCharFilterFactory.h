#ifndef org_apache_lucene_analysis_charfilter_MappingCharFilterFactory_H
#define org_apache_lucene_analysis_charfilter_MappingCharFilterFactory_H

#include "org/apache/lucene/analysis/CharFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
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
    class Reader;
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
        namespace charfilter {

          class MappingCharFilterFactory : public ::org::apache::lucene::analysis::CharFilterFactory {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_6a7e23584beb7c0f,
              mid_create_e087cc3459c2aeac,
              mid_inform_4ba602df53b96765,
              mid_normalize_e087cc3459c2aeac,
              mid_parseRules_78388b22bcab8983,
              mid_parseString_fef9c036acf290a9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MappingCharFilterFactory(jobject obj) : ::org::apache::lucene::analysis::CharFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MappingCharFilterFactory(const MappingCharFilterFactory& obj) : ::org::apache::lucene::analysis::CharFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            MappingCharFilterFactory();
            MappingCharFilterFactory(const ::java::util::Map &);

            ::java::io::Reader create(const ::java::io::Reader &) const;
            void inform(const ::org::apache::lucene::util::ResourceLoader &) const;
            ::java::io::Reader normalize(const ::java::io::Reader &) const;
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
        namespace charfilter {
          extern PyType_Def PY_TYPE_DEF(MappingCharFilterFactory);
          extern PyTypeObject *PY_TYPE(MappingCharFilterFactory);

          class t_MappingCharFilterFactory {
          public:
            PyObject_HEAD
            MappingCharFilterFactory object;
            static PyObject *wrap_Object(const MappingCharFilterFactory&);
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
