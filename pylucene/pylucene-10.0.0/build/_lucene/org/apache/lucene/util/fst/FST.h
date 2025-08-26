#ifndef org_apache_lucene_util_fst_FST_H
#define org_apache_lucene_util_fst_FST_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class FST$BytesReader;
          class Outputs;
          class FST;
          class FSTReader;
          class FST$Arc;
          class FST$FSTMetadata;
        }
        class Accountable;
      }
      namespace store {
        class DataInput;
        class DataOutput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class FST : public ::java::lang::Object {
           public:
            enum {
              mid_init$_4c012ee1cd3b9be2,
              mid_findTargetArc_f61f733cc235fc4c,
              mid_fromFSTReader_d5a0460e35136c92,
              mid_getBytesReader_541a60a9425cbcde,
              mid_getEmptyOutput_4819806f62f1360a,
              mid_getFirstArc_6e3fa3026b92cf4e,
              mid_getMetadata_4d4ce58ca0109531,
              mid_numBytes_0f176418e3e16541,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_read_0a6d317b25a619e3,
              mid_readArcByContinuous_630897579587cffc,
              mid_readArcByDirectAddressing_630897579587cffc,
              mid_readArcByIndex_630897579587cffc,
              mid_readFirstRealTargetArc_5007ac968f67559b,
              mid_readFirstTargetArc_56a58a27f6dfa3ab,
              mid_readLabel_d467dbc40d89e4aa,
              mid_readLastArcByContinuous_f69612fb5a7e0d3d,
              mid_readLastArcByDirectAddressing_f69612fb5a7e0d3d,
              mid_readMetadata_c49a72b0f1507f68,
              mid_readNextArc_f69612fb5a7e0d3d,
              mid_readNextRealArc_f69612fb5a7e0d3d,
              mid_save_e7b3ede3efacc86d,
              mid_save_92bb02073765524e,
              mid_targetHasArcs_f6acaf6464dcd59b,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            enum {
              fid_outputs,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FST(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FST(const FST& obj) : ::java::lang::Object(obj) {}

            static jbyte ARCS_FOR_BINARY_SEARCH;
            static jint BIT_ARC_HAS_OUTPUT;
            static jint END_LABEL;
            static jint VERSION_90;
            static jint VERSION_CONTINUOUS_ARCS;
            static jint VERSION_CURRENT;
            static jint VERSION_START;

            ::org::apache::lucene::util::fst::Outputs _get_outputs() const;

            FST(const ::org::apache::lucene::util::fst::FST$FSTMetadata &, const ::org::apache::lucene::store::DataInput &);

            ::org::apache::lucene::util::fst::FST$Arc findTargetArc(jint, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
            static FST fromFSTReader(const ::org::apache::lucene::util::fst::FST$FSTMetadata &, const ::org::apache::lucene::util::fst::FSTReader &);
            ::org::apache::lucene::util::fst::FST$BytesReader getBytesReader() const;
            ::java::lang::Object getEmptyOutput() const;
            ::org::apache::lucene::util::fst::FST$Arc getFirstArc(const ::org::apache::lucene::util::fst::FST$Arc &) const;
            ::org::apache::lucene::util::fst::FST$FSTMetadata getMetadata() const;
            jlong numBytes() const;
            jlong ramBytesUsed() const;
            static FST read(const ::java::nio::file::Path &, const ::org::apache::lucene::util::fst::Outputs &);
            ::org::apache::lucene::util::fst::FST$Arc readArcByContinuous(const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &, jint) const;
            ::org::apache::lucene::util::fst::FST$Arc readArcByDirectAddressing(const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &, jint) const;
            ::org::apache::lucene::util::fst::FST$Arc readArcByIndex(const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &, jint) const;
            ::org::apache::lucene::util::fst::FST$Arc readFirstRealTargetArc(jlong, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
            ::org::apache::lucene::util::fst::FST$Arc readFirstTargetArc(const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
            jint readLabel(const ::org::apache::lucene::store::DataInput &) const;
            ::org::apache::lucene::util::fst::FST$Arc readLastArcByContinuous(const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
            ::org::apache::lucene::util::fst::FST$Arc readLastArcByDirectAddressing(const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
            static ::org::apache::lucene::util::fst::FST$FSTMetadata readMetadata(const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::util::fst::Outputs &);
            ::org::apache::lucene::util::fst::FST$Arc readNextArc(const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
            ::org::apache::lucene::util::fst::FST$Arc readNextRealArc(const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
            void save(const ::java::nio::file::Path &) const;
            void save(const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::store::DataOutput &) const;
            static jboolean targetHasArcs(const ::org::apache::lucene::util::fst::FST$Arc &);
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
      namespace util {
        namespace fst {
          extern PyType_Def PY_TYPE_DEF(FST);
          extern PyTypeObject *PY_TYPE(FST);

          class t_FST {
          public:
            PyObject_HEAD
            FST object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FST *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FST&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FST&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
