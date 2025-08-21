#ifndef org_apache_lucene_analysis_charfilter_MappingCharFilterFactory_H
#define org_apache_lucene_analysis_charfilter_MappingCharFilterFactory_H

#include "org/apache/lucene/analysis/CharFilterFactory.h"

namespace java {
  namespace io {
    class IOException;
    class Reader;
  }
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
    }
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
              mid_init$_3720c61b0679eb3e,
              mid_init$_79ba0f5a7d05e623,
              mid_create_f8966313249002a6,
              mid_inform_6addbf380886844e,
              mid_normalize_f8966313249002a6,
              mid_parseRules_8df91fec51a3b860,
              mid_parseString_cb0eb1432185fc94,
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
