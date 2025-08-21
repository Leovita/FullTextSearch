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
              mid_init$_0fff48158e8a39e3,
              mid_collect_540b2b23d51b1efd,
              mid_scoreMode_45dfdcf7e901559d,
              mid_doSetNextReader_b7b06dce0a4097ed,
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
