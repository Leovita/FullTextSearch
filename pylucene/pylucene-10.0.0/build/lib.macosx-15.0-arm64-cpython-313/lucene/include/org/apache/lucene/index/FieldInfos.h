#ifndef org_apache_lucene_index_FieldInfos_H
#define org_apache_lucene_index_FieldInfos_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
    class Iterable;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class FieldInfo;
        class IndexReader;
        class FieldInfos;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class FieldInfos : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ebe037716ef528e9,
            mid_fieldInfo_a0a445f355d9f4d7,
            mid_fieldInfo_6062eff24b57598a,
            mid_getIndexedFields_0161ea5c9439de41,
            mid_getMergedFieldInfos_b68ddee61bb60075,
            mid_getParentField_09a7afff1868fc5e,
            mid_getSoftDeletesField_09a7afff1868fc5e,
            mid_hasDocValues_947277eca0748c4e,
            mid_hasFreq_947277eca0748c4e,
            mid_hasNorms_947277eca0748c4e,
            mid_hasOffsets_947277eca0748c4e,
            mid_hasPayloads_947277eca0748c4e,
            mid_hasPointValues_947277eca0748c4e,
            mid_hasPostings_947277eca0748c4e,
            mid_hasProx_947277eca0748c4e,
            mid_hasTermVectors_947277eca0748c4e,
            mid_hasVectorValues_947277eca0748c4e,
            mid_iterator_0db4c76ff7ee995b,
            mid_size_20fbf7565993c3d7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldInfos(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldInfos(const FieldInfos& obj) : ::java::lang::Object(obj) {}

          static FieldInfos *EMPTY;

          FieldInfos(const JArray< ::org::apache::lucene::index::FieldInfo > &);

          ::org::apache::lucene::index::FieldInfo fieldInfo(const ::java::lang::String &) const;
          ::org::apache::lucene::index::FieldInfo fieldInfo(jint) const;
          static ::java::util::Collection getIndexedFields(const ::org::apache::lucene::index::IndexReader &);
          static FieldInfos getMergedFieldInfos(const ::org::apache::lucene::index::IndexReader &);
          ::java::lang::String getParentField() const;
          ::java::lang::String getSoftDeletesField() const;
          jboolean hasDocValues() const;
          jboolean hasFreq() const;
          jboolean hasNorms() const;
          jboolean hasOffsets() const;
          jboolean hasPayloads() const;
          jboolean hasPointValues() const;
          jboolean hasPostings() const;
          jboolean hasProx() const;
          jboolean hasTermVectors() const;
          jboolean hasVectorValues() const;
          ::java::util::Iterator iterator() const;
          jint size() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(FieldInfos);
        extern PyTypeObject *PY_TYPE(FieldInfos);

        class t_FieldInfos {
        public:
          PyObject_HEAD
          FieldInfos object;
          static PyObject *wrap_Object(const FieldInfos&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
