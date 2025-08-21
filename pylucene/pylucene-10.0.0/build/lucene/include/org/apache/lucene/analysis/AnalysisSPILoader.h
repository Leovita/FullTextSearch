#ifndef org_apache_lucene_analysis_AnalysisSPILoader_H
#define org_apache_lucene_analysis_AnalysisSPILoader_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class IllegalAccessException;
    class NoSuchFieldException;
    class Class;
    class String;
    class IllegalStateException;
    class ClassLoader;
  }
  namespace util {
    class Set;
    class Map;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class AbstractAnalysisFactory;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class AnalysisSPILoader : public ::java::lang::Object {
         public:
          enum {
            mid_init$_880cf094c8c20ccb,
            mid_init$_098cf6324232ea4b,
            mid_availableServices_4df174295554d7bd,
            mid_lookupClass_f5e647a8ccc975d0,
            mid_lookupSPIName_205c6b35c6f0cc38,
            mid_newFactoryClassInstance_f47a4b9d38f274a7,
            mid_newInstance_50071edbe1bbdb94,
            mid_reload_7e882e12061eaf38,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AnalysisSPILoader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AnalysisSPILoader(const AnalysisSPILoader& obj) : ::java::lang::Object(obj) {}

          AnalysisSPILoader(const ::java::lang::Class &);
          AnalysisSPILoader(const ::java::lang::Class &, const ::java::lang::ClassLoader &);

          ::java::util::Set availableServices() const;
          ::java::lang::Class lookupClass(const ::java::lang::String &) const;
          static ::java::lang::String lookupSPIName(const ::java::lang::Class &);
          static ::org::apache::lucene::analysis::AbstractAnalysisFactory newFactoryClassInstance(const ::java::lang::Class &, const ::java::util::Map &);
          ::org::apache::lucene::analysis::AbstractAnalysisFactory newInstance(const ::java::lang::String &, const ::java::util::Map &) const;
          void reload(const ::java::lang::ClassLoader &) const;
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
        extern PyType_Def PY_TYPE_DEF(AnalysisSPILoader);
        extern PyTypeObject *PY_TYPE(AnalysisSPILoader);

        class t_AnalysisSPILoader {
        public:
          PyObject_HEAD
          AnalysisSPILoader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AnalysisSPILoader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AnalysisSPILoader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AnalysisSPILoader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
