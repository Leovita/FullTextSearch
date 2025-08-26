#ifndef org_apache_lucene_codecs_uniformsplit_IntersectBlockReader_H
#define org_apache_lucene_codecs_uniformsplit_IntersectBlockReader_H

#include "org/apache/lucene/codecs/uniformsplit/BlockReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermsEnum$SeekStatus;
        class TermState;
      }
      namespace util {
        class BytesRef;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {

          class IntersectBlockReader : public ::org::apache::lucene::codecs::uniformsplit::BlockReader {
           public:
            enum {
              mid_next_adbedbc1fa61c358,
              mid_seekCeil_3c5e68bf2fc0b5b1,
              mid_seekExact_08ac7a49de309824,
              mid_seekExact_1d3149fac12f2af3,
              mid_seekExact_68ebcc8117fd12a5,
              mid_getMinTermLength_bd89ce15dad49192,
              mid_seekFirstBlock_9aa4f33e82ea333f,
              mid_nextTermInBlockMatching_adbedbc1fa61c358,
              mid_endsWithCommonSuffix_62d838c6d69cbd91,
              mid_nextBlock_9aa4f33e82ea333f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntersectBlockReader(jobject obj) : ::org::apache::lucene::codecs::uniformsplit::BlockReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntersectBlockReader(const IntersectBlockReader& obj) : ::org::apache::lucene::codecs::uniformsplit::BlockReader(obj) {}

            ::org::apache::lucene::util::BytesRef next() const;
            ::org::apache::lucene::index::TermsEnum$SeekStatus seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
            jboolean seekExact(const ::org::apache::lucene::util::BytesRef &) const;
            void seekExact(jlong) const;
            void seekExact(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::TermState &) const;
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
      namespace codecs {
        namespace uniformsplit {
          extern PyType_Def PY_TYPE_DEF(IntersectBlockReader);
          extern PyTypeObject *PY_TYPE(IntersectBlockReader);

          class t_IntersectBlockReader {
          public:
            PyObject_HEAD
            IntersectBlockReader object;
            static PyObject *wrap_Object(const IntersectBlockReader&);
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
