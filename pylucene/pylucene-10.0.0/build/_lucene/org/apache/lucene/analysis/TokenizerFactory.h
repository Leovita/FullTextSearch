#ifndef org_apache_lucene_analysis_TokenizerFactory_H
#define org_apache_lucene_analysis_TokenizerFactory_H

#include "org/apache/lucene/analysis/AbstractAnalysisFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenizerFactory;
        class Tokenizer;
      }
      namespace util {
        class AttributeFactory;
      }
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class TokenizerFactory : public ::org::apache::lucene::analysis::AbstractAnalysisFactory {
         public:
          enum {
            mid_availableTokenizers_4df174295554d7bd,
            mid_create_e38a88d9cd60cfe5,
            mid_create_8e359444ad2c1a86,
            mid_findSPIName_205c6b35c6f0cc38,
            mid_forName_8b82a6546107495b,
            mid_lookupClass_f5e647a8ccc975d0,
            mid_reloadTokenizers_7e882e12061eaf38,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TokenizerFactory(jobject obj) : ::org::apache::lucene::analysis::AbstractAnalysisFactory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TokenizerFactory(const TokenizerFactory& obj) : ::org::apache::lucene::analysis::AbstractAnalysisFactory(obj) {}

          static ::java::util::Set availableTokenizers();
          ::org::apache::lucene::analysis::Tokenizer create() const;
          ::org::apache::lucene::analysis::Tokenizer create(const ::org::apache::lucene::util::AttributeFactory &) const;
          static ::java::lang::String findSPIName(const ::java::lang::Class &);
          static TokenizerFactory forName(const ::java::lang::String &, const ::java::util::Map &);
          static ::java::lang::Class lookupClass(const ::java::lang::String &);
          static void reloadTokenizers(const ::java::lang::ClassLoader &);
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
        extern PyType_Def PY_TYPE_DEF(TokenizerFactory);
        extern PyTypeObject *PY_TYPE(TokenizerFactory);

        class t_TokenizerFactory {
        public:
          PyObject_HEAD
          TokenizerFactory object;
          static PyObject *wrap_Object(const TokenizerFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
