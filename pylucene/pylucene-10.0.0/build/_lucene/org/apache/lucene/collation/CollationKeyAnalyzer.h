#ifndef org_apache_lucene_collation_CollationKeyAnalyzer_H
#define org_apache_lucene_collation_CollationKeyAnalyzer_H

#include "org/apache/lucene/analysis/Analyzer.h"

namespace java {
  namespace text {
    class Collator;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace collation {

        class CollationKeyAnalyzer : public ::org::apache::lucene::analysis::Analyzer {
         public:
          enum {
            mid_init$_df4e91f4589aa589,
            mid_createComponents_f774fffda992519d,
            mid_attributeFactory_32e9e9f90ba9887a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CollationKeyAnalyzer(jobject obj) : ::org::apache::lucene::analysis::Analyzer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CollationKeyAnalyzer(const CollationKeyAnalyzer& obj) : ::org::apache::lucene::analysis::Analyzer(obj) {}

          CollationKeyAnalyzer(const ::java::text::Collator &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace collation {
        extern PyType_Def PY_TYPE_DEF(CollationKeyAnalyzer);
        extern PyTypeObject *PY_TYPE(CollationKeyAnalyzer);

        class t_CollationKeyAnalyzer {
        public:
          PyObject_HEAD
          CollationKeyAnalyzer object;
          static PyObject *wrap_Object(const CollationKeyAnalyzer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
