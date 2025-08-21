#ifndef org_apache_lucene_search_uhighlight_OffsetsEnum$OfPostings_H
#define org_apache_lucene_search_uhighlight_OffsetsEnum$OfPostings_H

#include "org/apache/lucene/search/uhighlight/OffsetsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class PostingsEnum;
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
      namespace search {
        namespace uhighlight {

          class OffsetsEnum$OfPostings : public ::org::apache::lucene::search::uhighlight::OffsetsEnum {
           public:
            enum {
              mid_init$_b8ddd4aa0c0952c4,
              mid_init$_67a6d19f4df5507c,
              mid_endOffset_20fbf7565993c3d7,
              mid_freq_20fbf7565993c3d7,
              mid_getPostingsEnum_4e8e845e02728bdc,
              mid_getTerm_9740fddd1c7df148,
              mid_nextPosition_947277eca0748c4e,
              mid_startOffset_20fbf7565993c3d7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffsetsEnum$OfPostings(jobject obj) : ::org::apache::lucene::search::uhighlight::OffsetsEnum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffsetsEnum$OfPostings(const OffsetsEnum$OfPostings& obj) : ::org::apache::lucene::search::uhighlight::OffsetsEnum(obj) {}

            OffsetsEnum$OfPostings(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::PostingsEnum &);
            OffsetsEnum$OfPostings(const ::org::apache::lucene::util::BytesRef &, jint, const ::org::apache::lucene::index::PostingsEnum &);

            jint endOffset() const;
            jint freq() const;
            ::org::apache::lucene::index::PostingsEnum getPostingsEnum() const;
            ::org::apache::lucene::util::BytesRef getTerm() const;
            jboolean nextPosition() const;
            jint startOffset() const;
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
      namespace search {
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(OffsetsEnum$OfPostings);
          extern PyTypeObject *PY_TYPE(OffsetsEnum$OfPostings);

          class t_OffsetsEnum$OfPostings {
          public:
            PyObject_HEAD
            OffsetsEnum$OfPostings object;
            static PyObject *wrap_Object(const OffsetsEnum$OfPostings&);
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
