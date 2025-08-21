#ifndef org_apache_lucene_analysis_CharFilterFactory_H
#define org_apache_lucene_analysis_CharFilterFactory_H

#include "org/apache/lucene/analysis/AbstractAnalysisFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class CharFilterFactory;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
    class ClassLoader;
  }
  namespace util {
    class Set;
    class Map;
  }
  namespace io {
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class CharFilterFactory : public ::org::apache::lucene::analysis::AbstractAnalysisFactory {
         public:
          enum {
            mid_availableCharFilters_4df174295554d7bd,
            mid_create_f8966313249002a6,
            mid_findSPIName_205c6b35c6f0cc38,
            mid_forName_7a86fff12a87cc2f,
            mid_lookupClass_f5e647a8ccc975d0,
            mid_normalize_f8966313249002a6,
            mid_reloadCharFilters_7e882e12061eaf38,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CharFilterFactory(jobject obj) : ::org::apache::lucene::analysis::AbstractAnalysisFactory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CharFilterFactory(const CharFilterFactory& obj) : ::org::apache::lucene::analysis::AbstractAnalysisFactory(obj) {}

          static ::java::util::Set availableCharFilters();
          ::java::io::Reader create(const ::java::io::Reader &) const;
          static ::java::lang::String findSPIName(const ::java::lang::Class &);
          static CharFilterFactory forName(const ::java::lang::String &, const ::java::util::Map &);
          static ::java::lang::Class lookupClass(const ::java::lang::String &);
          ::java::io::Reader normalize(const ::java::io::Reader &) const;
          static void reloadCharFilters(const ::java::lang::ClassLoader &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(CharFilterFactory);
        extern PyTypeObject *PY_TYPE(CharFilterFactory);

        class t_CharFilterFactory {
        public:
          PyObject_HEAD
          CharFilterFactory object;
          static PyObject *wrap_Object(const CharFilterFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
