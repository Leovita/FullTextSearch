#ifndef org_apache_lucene_internal_tests_TestSecrets_H
#define org_apache_lucene_internal_tests_TestSecrets_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace tests {
          class SegmentReaderAccess;
          class IndexPackageAccess;
          class IndexWriterAccess;
          class FilterIndexInputAccess;
          class ConcurrentMergeSchedulerAccess;
        }
      }
    }
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
              mid_getConcurrentMergeSchedulerAccess_c73df1483ae9bed0,
              mid_getFilterInputIndexAccess_ed2843d5287e3b1a,
              mid_getIndexPackageAccess_1ee3a035b6ec8a6a,
              mid_getIndexWriterAccess_fe0ed632910bdec2,
              mid_getSegmentReaderAccess_fc53ffc80198a501,
              mid_setConcurrentMergeSchedulerAccess_7316882da297c499,
              mid_setFilterInputIndexAccess_2061db2990e623f0,
              mid_setIndexPackageAccess_347cff9b6aa9f451,
              mid_setIndexWriterAccess_f6d36f3d5fde1324,
              mid_setSegmentReaderAccess_ded0459e09b9ecf6,
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
