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
    class Map;
    class Set;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        class TokenFilterFactory;
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
            mid_availableTokenFilters_79131c6bbcf08916,
            mid_create_f3e050e998938273,
            mid_findSPIName_6db5b6bc30526b11,
            mid_forName_1529cfa172cd9821,
            mid_lookupClass_34dc63379bcbfa09,
            mid_normalize_f3e050e998938273,
            mid_reloadTokenFilters_d603563f542d31ba,
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
