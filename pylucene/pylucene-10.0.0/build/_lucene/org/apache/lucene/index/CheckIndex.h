#ifndef org_apache_lucene_index_CheckIndex_H
#define org_apache_lucene_index_CheckIndex_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Sort;
      }
      namespace index {
        class CheckIndex$Status$FieldNormStatus;
        class CheckIndex$Status$TermVectorStatus;
        class CheckIndex$Status$StoredFieldStatus;
        class CheckIndex$Status$LiveDocStatus;
        class CheckIndex$Status;
        class CheckIndex$Status$IndexSortStatus;
        class CheckIndex$Status$VectorValuesStatus;
        class CheckIndex$Status$FieldInfoStatus;
        class CheckIndex$Status$TermIndexStatus;
        class CodecReader;
        class CheckIndex$Status$PointsStatus;
        class CheckIndex$Status$DocValuesStatus;
        class CheckIndex$Options;
      }
      namespace store {
        class Directory;
        class Lock;
      }
    }
  }
}
namespace java {
  namespace io {
    class PrintStream;
    class IOException;
    class Closeable;
  }
  namespace lang {
    class Class;
    class String;
    class InterruptedException;
  }
  namespace util {
    namespace concurrent {
      class ExecutorService;
    }
    class List;
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
            mid_init$_3c151c130d7f3176,
            mid_init$_cae07b79643917d5,
            mid_assertsOn_947277eca0748c4e,
            mid_checkIndex_078b630841622750,
            mid_checkIndex_72d9923f5baeb425,
            mid_checkIndex_7265ce645ca034ae,
            mid_close_3720c61b0679eb3e,
            mid_doCheck_986dfb639b6f206c,
            mid_exorciseIndex_aeb9341ef29350a6,
            mid_getFailFast_947277eca0748c4e,
            mid_getLevel_20fbf7565993c3d7,
            mid_main_ce41e621b30e91b1,
            mid_parseOptions_4ddc04215123e351,
            mid_setFailFast_b110fc3a58c081ab,
            mid_setInfoStream_f19a9aaf837ad692,
            mid_setInfoStream_57dd4fed57669a71,
            mid_setLevel_540b2b23d51b1efd,
            mid_setThreadCount_540b2b23d51b1efd,
            mid_testDocValues_c875ec7c78d218b3,
            mid_testFieldInfos_abd26cedfeda8933,
            mid_testFieldNorms_8e3e13f2f1ea7562,
            mid_testLiveDocs_e1f87b4e0d56b7ab,
            mid_testPoints_76729b666bd187cf,
            mid_testPostings_d64f488da92c5945,
            mid_testPostings_207d5c2d7a4247cd,
            mid_testSort_5f4c83cbaffb3b5c,
            mid_testStoredFields_acbd4ff08ad30eeb,
            mid_testTermVectors_b8e0a3dbe880fde4,
            mid_testTermVectors_afb0e02c638c392d,
            mid_testVectors_a73e839820a79c46,
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
