#ifndef org_apache_lucene_misc_search_MemoryAccountingBitsetCollector_H
#define org_apache_lucene_misc_search_MemoryAccountingBitsetCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
      }
      namespace misc {
        class CollectorMemoryTracker;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace search {

          class MemoryAccountingBitsetCollector : public ::org::apache::lucene::search::SimpleCollector {
           public:
            enum {
              mid_init$_6b176080b6941c2e,
              mid_collect_8226bd0b0fc13dba,
              mid_scoreMode_23e7061dcdc84768,
              mid_doSetNextReader_32243afefe6b151f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MemoryAccountingBitsetCollector(jobject obj) : ::org::apache::lucene::search::SimpleCollector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MemoryAccountingBitsetCollector(const MemoryAccountingBitsetCollector& obj) : ::org::apache::lucene::search::SimpleCollector(obj) {}

            MemoryAccountingBitsetCollector(const ::org::apache::lucene::misc::CollectorMemoryTracker &);

            void collect(jint) const;
            ::org::apache::lucene::search::ScoreMode scoreMode() const;
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
      namespace misc {
        namespace search {
          extern PyType_Def PY_TYPE_DEF(MemoryAccountingBitsetCollector);
          extern PyTypeObject *PY_TYPE(MemoryAccountingBitsetCollector);

          class t_MemoryAccountingBitsetCollector {
          public:
            PyObject_HEAD
            MemoryAccountingBitsetCollector object;
            static PyObject *wrap_Object(const MemoryAccountingBitsetCollector&);
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
