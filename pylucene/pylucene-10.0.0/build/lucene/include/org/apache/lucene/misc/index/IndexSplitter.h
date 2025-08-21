#ifndef org_apache_lucene_misc_index_IndexSplitter_H
#define org_apache_lucene_misc_index_IndexSplitter_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
    class Exception;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentInfos;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace index {

          class IndexSplitter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_8a3244428bfc77b8,
              mid_listSegments_3720c61b0679eb3e,
              mid_main_ce41e621b30e91b1,
              mid_remove_ce41e621b30e91b1,
              mid_split_3af9614f02c4b997,
              max_mid
            };

            enum {
              fid_infos,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IndexSplitter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IndexSplitter(const IndexSplitter& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::index::SegmentInfos _get_infos() const;

            IndexSplitter(const ::java::nio::file::Path &);

            void listSegments() const;
            static void main(const JArray< ::java::lang::String > &);
            void remove(const JArray< ::java::lang::String > &) const;
            void split(const ::java::nio::file::Path &, const JArray< ::java::lang::String > &) const;
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
      namespace misc {
        namespace index {
          extern PyType_Def PY_TYPE_DEF(IndexSplitter);
          extern PyTypeObject *PY_TYPE(IndexSplitter);

          class t_IndexSplitter {
          public:
            PyObject_HEAD
            IndexSplitter object;
            static PyObject *wrap_Object(const IndexSplitter&);
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
