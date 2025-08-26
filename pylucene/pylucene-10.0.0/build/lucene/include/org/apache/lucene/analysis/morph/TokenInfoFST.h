#ifndef org_apache_lucene_analysis_morph_TokenInfoFST_H
#define org_apache_lucene_analysis_morph_TokenInfoFST_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class FST$BytesReader;
          class FST$Arc;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class Long;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace morph {

          class TokenInfoFST : public ::java::lang::Object {
           public:
            enum {
              mid_findTargetArc_42031af582c3228a,
              mid_getBytesReader_541a60a9425cbcde,
              mid_getFirstArc_6e3fa3026b92cf4e,
              max_mid
            };

            enum {
              fid_NO_OUTPUT,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TokenInfoFST(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TokenInfoFST(const TokenInfoFST& obj) : ::java::lang::Object(obj) {}

            ::java::lang::Long _get_NO_OUTPUT() const;

            ::org::apache::lucene::util::fst::FST$Arc findTargetArc(jint, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$Arc &, jboolean, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
            ::org::apache::lucene::util::fst::FST$BytesReader getBytesReader() const;
            ::org::apache::lucene::util::fst::FST$Arc getFirstArc(const ::org::apache::lucene::util::fst::FST$Arc &) const;
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
      namespace analysis {
        namespace morph {
          extern PyType_Def PY_TYPE_DEF(TokenInfoFST);
          extern PyTypeObject *PY_TYPE(TokenInfoFST);

          class t_TokenInfoFST {
          public:
            PyObject_HEAD
            TokenInfoFST object;
            static PyObject *wrap_Object(const TokenInfoFST&);
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
