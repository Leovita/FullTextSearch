#ifndef org_apache_lucene_backward_codecs_lucene99_Lucene99PostingsFormat$IntBlockTermState_H
#define org_apache_lucene_backward_codecs_lucene99_Lucene99PostingsFormat$IntBlockTermState_H

#include "org/apache/lucene/codecs/BlockTermState.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene99 {
          class Lucene99PostingsFormat$IntBlockTermState;
        }
      }
      namespace index {
        class TermState;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene99 {

          class Lucene99PostingsFormat$IntBlockTermState : public ::org::apache::lucene::codecs::BlockTermState {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_clone_53c5d02dcc38fbe1,
              mid_copyFrom_dcdf58576ff767de,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            enum {
              fid_docStartFP,
              fid_lastPosBlockOffset,
              fid_payStartFP,
              fid_posStartFP,
              fid_singletonDocID,
              fid_skipOffset,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene99PostingsFormat$IntBlockTermState(jobject obj) : ::org::apache::lucene::codecs::BlockTermState(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene99PostingsFormat$IntBlockTermState(const Lucene99PostingsFormat$IntBlockTermState& obj) : ::org::apache::lucene::codecs::BlockTermState(obj) {}

            jlong _get_docStartFP() const;
            void _set_docStartFP(jlong) const;
            jlong _get_lastPosBlockOffset() const;
            void _set_lastPosBlockOffset(jlong) const;
            jlong _get_payStartFP() const;
            void _set_payStartFP(jlong) const;
            jlong _get_posStartFP() const;
            void _set_posStartFP(jlong) const;
            jint _get_singletonDocID() const;
            void _set_singletonDocID(jint) const;
            jlong _get_skipOffset() const;
            void _set_skipOffset(jlong) const;

            Lucene99PostingsFormat$IntBlockTermState();

            Lucene99PostingsFormat$IntBlockTermState clone() const;
            void copyFrom(const ::org::apache::lucene::index::TermState &) const;
            ::java::lang::String toString() const;
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
      namespace backward_codecs {
        namespace lucene99 {
          extern PyType_Def PY_TYPE_DEF(Lucene99PostingsFormat$IntBlockTermState);
          extern PyTypeObject *PY_TYPE(Lucene99PostingsFormat$IntBlockTermState);

          class t_Lucene99PostingsFormat$IntBlockTermState {
          public:
            PyObject_HEAD
            Lucene99PostingsFormat$IntBlockTermState object;
            static PyObject *wrap_Object(const Lucene99PostingsFormat$IntBlockTermState&);
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
