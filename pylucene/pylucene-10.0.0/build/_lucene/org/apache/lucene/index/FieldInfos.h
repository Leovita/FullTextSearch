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
        class IndexReader;
        class FieldInfo;
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
            mid_init$_e26bc3b68b5c7db7,
            mid_fieldInfo_e0f86c1ef7db94db,
            mid_fieldInfo_26314d0927d205f0,
            mid_getIndexedFields_e913fe1c5e8c9aa4,
            mid_getMergedFieldInfos_538fcfa0ef86614e,
            mid_getParentField_e7df854526d67fa3,
            mid_getSoftDeletesField_e7df854526d67fa3,
            mid_hasDocValues_9aa4f33e82ea333f,
            mid_hasFreq_9aa4f33e82ea333f,
            mid_hasNorms_9aa4f33e82ea333f,
            mid_hasOffsets_9aa4f33e82ea333f,
            mid_hasPayloads_9aa4f33e82ea333f,
            mid_hasPointValues_9aa4f33e82ea333f,
            mid_hasPostings_9aa4f33e82ea333f,
            mid_hasProx_9aa4f33e82ea333f,
            mid_hasTermVectors_9aa4f33e82ea333f,
            mid_hasVectorValues_9aa4f33e82ea333f,
            mid_iterator_c7985fafdcf40e83,
            mid_size_bd89ce15dad49192,
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
