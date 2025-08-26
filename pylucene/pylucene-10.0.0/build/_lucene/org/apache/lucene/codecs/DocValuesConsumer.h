#ifndef org_apache_lucene_codecs_DocValuesConsumer_H
#define org_apache_lucene_codecs_DocValuesConsumer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeState;
        class FieldInfo;
      }
      namespace codecs {
        class DocValuesProducer;
      }
    }
  }
}
namespace java {
  namespace io {
    class Closeable;
    class IOException;
  }
  namespace lang {
    class Class;
    class Number;
    class Iterable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class DocValuesConsumer : public ::java::lang::Object {
         public:
          enum {
            mid_addBinaryField_e3ec6fa79196e073,
            mid_addNumericField_e3ec6fa79196e073,
            mid_addSortedField_e3ec6fa79196e073,
            mid_addSortedNumericField_e3ec6fa79196e073,
            mid_addSortedSetField_e3ec6fa79196e073,
            mid_isSingleValued_053f5f273d2882a9,
            mid_merge_b7f5b82c43646887,
            mid_mergeBinaryField_6efd9d341cba2a34,
            mid_mergeNumericField_6efd9d341cba2a34,
            mid_mergeSortedField_6efd9d341cba2a34,
            mid_mergeSortedNumericField_6efd9d341cba2a34,
            mid_mergeSortedSetField_6efd9d341cba2a34,
            mid_singletonView_f13c6467b2068a63,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValuesConsumer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValuesConsumer(const DocValuesConsumer& obj) : ::java::lang::Object(obj) {}

          void addBinaryField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::DocValuesProducer &) const;
          void addNumericField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::DocValuesProducer &) const;
          void addSortedField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::DocValuesProducer &) const;
          void addSortedNumericField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::DocValuesProducer &) const;
          void addSortedSetField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::DocValuesProducer &) const;
          static jboolean isSingleValued(const ::java::lang::Iterable &);
          void merge(const ::org::apache::lucene::index::MergeState &) const;
          void mergeBinaryField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &) const;
          void mergeNumericField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &) const;
          void mergeSortedField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &) const;
          void mergeSortedNumericField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &) const;
          void mergeSortedSetField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &) const;
          static ::java::lang::Iterable singletonView(const ::java::lang::Iterable &, const ::java::lang::Iterable &, const ::java::lang::Number &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(DocValuesConsumer);
        extern PyTypeObject *PY_TYPE(DocValuesConsumer);

        class t_DocValuesConsumer {
        public:
          PyObject_HEAD
          DocValuesConsumer object;
          static PyObject *wrap_Object(const DocValuesConsumer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
