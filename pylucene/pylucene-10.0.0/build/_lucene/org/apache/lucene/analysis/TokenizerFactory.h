#ifndef org_apache_lucene_analysis_TokenizerFactory_H
#define org_apache_lucene_analysis_TokenizerFactory_H

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
        class Tokenizer;
        class TokenizerFactory;
      }
      namespace util {
        class AttributeFactory;
      }
    }
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
            mid_availableTokenizers_79131c6bbcf08916,
            mid_create_29ac49742f21d24e,
            mid_create_734505517ea78b04,
            mid_findSPIName_6db5b6bc30526b11,
            mid_forName_840473299cb213f2,
            mid_lookupClass_34dc63379bcbfa09,
            mid_reloadTokenizers_d603563f542d31ba,
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
