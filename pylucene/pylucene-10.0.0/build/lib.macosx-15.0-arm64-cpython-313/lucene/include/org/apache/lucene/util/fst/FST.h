#ifndef org_apache_lucene_util_fst_FST_H
#define org_apache_lucene_util_fst_FST_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        namespace fst {
          class FST$BytesReader;
          class FSTReader;
          class FST$Arc;
          class FST$FSTMetadata;
          class FST;
          class Outputs;
        }
      }
      namespace store {
        class DataInput;
        class DataOutput;
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
    class String;
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
              mid_init$_f83f95c3971e62d7,
              mid_findTargetArc_3bc5e9c1c3c23982,
              mid_fromFSTReader_daf5b0ad98a2b5dd,
              mid_getBytesReader_14e8f9e66b6f303e,
              mid_getEmptyOutput_5655ed8670534604,
              mid_getFirstArc_f5bb151389242a45,
              mid_getMetadata_3f93d7d5124057ff,
              mid_numBytes_16939d9d0a9a9721,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_read_32a5b5d9af1eaa3a,
              mid_readArcByContinuous_c1d4cdaf46c0e524,
              mid_readArcByDirectAddressing_c1d4cdaf46c0e524,
              mid_readArcByIndex_c1d4cdaf46c0e524,
              mid_readFirstRealTargetArc_434fbbb42904d4d4,
              mid_readFirstTargetArc_39620959c2b3f84d,
              mid_readLabel_aa555dd69434a422,
              mid_readLastArcByContinuous_4bf26fa4de117302,
              mid_readLastArcByDirectAddressing_4bf26fa4de117302,
              mid_readMetadata_b016a0de79545b78,
              mid_readNextArc_4bf26fa4de117302,
              mid_readNextRealArc_4bf26fa4de117302,
              mid_save_8a3244428bfc77b8,
              mid_save_a95d280c3e96f218,
              mid_targetHasArcs_43a4a64af1e140f4,
              mid_toString_09a7afff1868fc5e,
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
