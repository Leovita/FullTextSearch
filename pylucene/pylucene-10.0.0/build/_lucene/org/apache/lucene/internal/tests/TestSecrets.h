#ifndef org_apache_lucene_internal_tests_TestSecrets_H
#define org_apache_lucene_internal_tests_TestSecrets_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace tests {
          class ConcurrentMergeSchedulerAccess;
          class IndexWriterAccess;
          class SegmentReaderAccess;
          class FilterIndexInputAccess;
          class IndexPackageAccess;
        }
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
      namespace internal {
        namespace tests {

          class TestSecrets : public ::java::lang::Object {
           public:
            enum {
              mid_getConcurrentMergeSchedulerAccess_d448c464a9f58029,
              mid_getFilterInputIndexAccess_c6bc51ee1c178bbb,
              mid_getIndexPackageAccess_a3e75788ca0688b5,
              mid_getIndexWriterAccess_e70371d5cd250047,
              mid_getSegmentReaderAccess_1a3abfea82997e0c,
              mid_setConcurrentMergeSchedulerAccess_26bb0acdf6f90772,
              mid_setFilterInputIndexAccess_a00bca9015802886,
              mid_setIndexPackageAccess_a754003a6c8c7248,
              mid_setIndexWriterAccess_05c81513bdc3ae4c,
              mid_setSegmentReaderAccess_6c2c339c85a1b640,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TestSecrets(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TestSecrets(const TestSecrets& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::internal::tests::ConcurrentMergeSchedulerAccess getConcurrentMergeSchedulerAccess();
            static ::org::apache::lucene::internal::tests::FilterIndexInputAccess getFilterInputIndexAccess();
            static ::org::apache::lucene::internal::tests::IndexPackageAccess getIndexPackageAccess();
            static ::org::apache::lucene::internal::tests::IndexWriterAccess getIndexWriterAccess();
            static ::org::apache::lucene::internal::tests::SegmentReaderAccess getSegmentReaderAccess();
            static void setConcurrentMergeSchedulerAccess(const ::org::apache::lucene::internal::tests::ConcurrentMergeSchedulerAccess &);
            static void setFilterInputIndexAccess(const ::org::apache::lucene::internal::tests::FilterIndexInputAccess &);
            static void setIndexPackageAccess(const ::org::apache::lucene::internal::tests::IndexPackageAccess &);
            static void setIndexWriterAccess(const ::org::apache::lucene::internal::tests::IndexWriterAccess &);
            static void setSegmentReaderAccess(const ::org::apache::lucene::internal::tests::SegmentReaderAccess &);
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
      namespace internal {
        namespace tests {
          extern PyType_Def PY_TYPE_DEF(TestSecrets);
          extern PyTypeObject *PY_TYPE(TestSecrets);

          class t_TestSecrets {
          public:
            PyObject_HEAD
            TestSecrets object;
            static PyObject *wrap_Object(const TestSecrets&);
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
