#ifndef org_apache_lucene_index_CheckIndex_H
#define org_apache_lucene_index_CheckIndex_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class InterruptedException;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
    class PrintStream;
    class Closeable;
  }
  namespace util {
    namespace concurrent {
      class ExecutorService;
    }
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class CodecReader;
        class CheckIndex$Status$StoredFieldStatus;
        class CheckIndex$Status$DocValuesStatus;
        class CheckIndex$Status;
        class CheckIndex$Status$TermIndexStatus;
        class CheckIndex$Status$TermVectorStatus;
        class CheckIndex$Status$IndexSortStatus;
        class CheckIndex$Status$LiveDocStatus;
        class CheckIndex$Status$FieldInfoStatus;
        class CheckIndex$Status$FieldNormStatus;
        class CheckIndex$Status$VectorValuesStatus;
        class CheckIndex$Status$PointsStatus;
        class CheckIndex$Options;
      }
      namespace search {
        class Sort;
      }
      namespace store {
        class Directory;
        class Lock;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class CheckIndex : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0bf39a7351552ef4,
            mid_init$_e5eb72afddfc42d7,
            mid_assertsOn_9aa4f33e82ea333f,
            mid_checkIndex_eed1a95e4079d296,
            mid_checkIndex_8e527943e4c7a9a1,
            mid_checkIndex_b1d8989644420fef,
            mid_close_e7bdbe105ce1bafb,
            mid_doCheck_a5b2f2e6ab89b84d,
            mid_exorciseIndex_dff1315845ee2507,
            mid_getFailFast_9aa4f33e82ea333f,
            mid_getLevel_bd89ce15dad49192,
            mid_main_1f90f2fcbe43e50d,
            mid_parseOptions_8867e4473ba8531f,
            mid_setFailFast_f5dd97eebf6a215a,
            mid_setInfoStream_922e82480ddcbcc4,
            mid_setInfoStream_c8770a151128b575,
            mid_setLevel_8226bd0b0fc13dba,
            mid_setThreadCount_8226bd0b0fc13dba,
            mid_testDocValues_2bbcd722ff490eae,
            mid_testFieldInfos_8a60cb096958ff71,
            mid_testFieldNorms_60ba5ecfce9a99a1,
            mid_testLiveDocs_92c0f7da428f77ee,
            mid_testPoints_ba3ec1ae6de079b3,
            mid_testPostings_895714857514a4b2,
            mid_testPostings_6682688b3bda4d39,
            mid_testSort_117685513bccac4c,
            mid_testStoredFields_4b3d4366ee9cb71d,
            mid_testTermVectors_82359b7f8e5d30c0,
            mid_testTermVectors_3c7cbbcf7fb10cff,
            mid_testVectors_4c7315ad7047a89b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CheckIndex(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CheckIndex(const CheckIndex& obj) : ::java::lang::Object(obj) {}

          CheckIndex(const ::org::apache::lucene::store::Directory &);
          CheckIndex(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Lock &);

          static jboolean assertsOn();
          ::org::apache::lucene::index::CheckIndex$Status checkIndex() const;
          ::org::apache::lucene::index::CheckIndex$Status checkIndex(const ::java::util::List &) const;
          ::org::apache::lucene::index::CheckIndex$Status checkIndex(const ::java::util::List &, const ::java::util::concurrent::ExecutorService &) const;
          void close() const;
          jint doCheck(const ::org::apache::lucene::index::CheckIndex$Options &) const;
          void exorciseIndex(const ::org::apache::lucene::index::CheckIndex$Status &) const;
          jboolean getFailFast() const;
          jint getLevel() const;
          static void main(const JArray< ::java::lang::String > &);
          static ::org::apache::lucene::index::CheckIndex$Options parseOptions(const JArray< ::java::lang::String > &);
          void setFailFast(jboolean) const;
          void setInfoStream(const ::java::io::PrintStream &) const;
          void setInfoStream(const ::java::io::PrintStream &, jboolean) const;
          void setLevel(jint) const;
          void setThreadCount(jint) const;
          static ::org::apache::lucene::index::CheckIndex$Status$DocValuesStatus testDocValues(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &, jboolean);
          static ::org::apache::lucene::index::CheckIndex$Status$FieldInfoStatus testFieldInfos(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &, jboolean);
          static ::org::apache::lucene::index::CheckIndex$Status$FieldNormStatus testFieldNorms(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &, jboolean);
          static ::org::apache::lucene::index::CheckIndex$Status$LiveDocStatus testLiveDocs(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &, jboolean);
          static ::org::apache::lucene::index::CheckIndex$Status$PointsStatus testPoints(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &, jboolean);
          static ::org::apache::lucene::index::CheckIndex$Status$TermIndexStatus testPostings(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &);
          static ::org::apache::lucene::index::CheckIndex$Status$TermIndexStatus testPostings(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &, jboolean, jint, jboolean);
          static ::org::apache::lucene::index::CheckIndex$Status$IndexSortStatus testSort(const ::org::apache::lucene::index::CodecReader &, const ::org::apache::lucene::search::Sort &, const ::java::io::PrintStream &, jboolean);
          static ::org::apache::lucene::index::CheckIndex$Status$StoredFieldStatus testStoredFields(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &, jboolean);
          static ::org::apache::lucene::index::CheckIndex$Status$TermVectorStatus testTermVectors(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &);
          static ::org::apache::lucene::index::CheckIndex$Status$TermVectorStatus testTermVectors(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &, jboolean, jint, jboolean);
          static ::org::apache::lucene::index::CheckIndex$Status$VectorValuesStatus testVectors(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &, jboolean);
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
        extern PyType_Def PY_TYPE_DEF(CheckIndex);
        extern PyTypeObject *PY_TYPE(CheckIndex);

        class t_CheckIndex {
        public:
          PyObject_HEAD
          CheckIndex object;
          static PyObject *wrap_Object(const CheckIndex&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
