#ifndef org_apache_lucene_analysis_TokenFilterFactory_H
#define org_apache_lucene_analysis_TokenFilterFactory_H

#include "org/apache/lucene/analysis/AbstractAnalysisFactory.h"

namespace java {
  namespace lang {
    class Class;
    class String;
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
        class TokenFilterFactory;
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

        class TokenFilterFactory : public ::org::apache::lucene::analysis::AbstractAnalysisFactory {
         public:
          enum {
            mid_availableTokenFilters_4df174295554d7bd,
            mid_create_2ec4d1726b35d478,
            mid_findSPIName_205c6b35c6f0cc38,
            mid_forName_6f9339a4de142596,
            mid_lookupClass_f5e647a8ccc975d0,
            mid_normalize_2ec4d1726b35d478,
            mid_reloadTokenFilters_7e882e12061eaf38,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TokenFilterFactory(jobject obj) : ::org::apache::lucene::analysis::AbstractAnalysisFactory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TokenFilterFactory(const TokenFilterFactory& obj) : ::org::apache::lucene::analysis::AbstractAnalysisFactory(obj) {}

          static ::java::util::Set availableTokenFilters();
          ::org::apache::lucene::analysis::TokenStream create(const ::org::apache::lucene::analysis::TokenStream &) const;
          static ::java::lang::String findSPIName(const ::java::lang::Class &);
          static TokenFilterFactory forName(const ::java::lang::String &, const ::java::util::Map &);
          static ::java::lang::Class lookupClass(const ::java::lang::String &);
          ::org::apache::lucene::analysis::TokenStream normalize(const ::org::apache::lucene::analysis::TokenStream &) const;
          static void reloadTokenFilters(const ::java::lang::ClassLoader &);
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
        extern PyType_Def PY_TYPE_DEF(TokenFilterFactory);
        extern PyTypeObject *PY_TYPE(TokenFilterFactory);

        class t_TokenFilterFactory {
        public:
          PyObject_HEAD
          TokenFilterFactory object;
          static PyObject *wrap_Object(const TokenFilterFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
