#ifndef org_apache_lucene_analysis_util_OpenStringBuilder_H
#define org_apache_lucene_analysis_util_OpenStringBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Appendable;
    class CharSequence;
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class OpenStringBuilder;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class OpenStringBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_540b2b23d51b1efd,
              mid_init$_e06ffef1ed339658,
              mid_append_9ff310b2398f3345,
              mid_append_109384249f8287db,
              mid_append_6ba965e1dc9fe6af,
              mid_capacity_20fbf7565993c3d7,
              mid_charAt_92a13ce4196a7e69,
              mid_flush_3720c61b0679eb3e,
              mid_getArray_77d52ded526199de,
              mid_length_20fbf7565993c3d7,
              mid_reserve_540b2b23d51b1efd,
              mid_reset_3720c61b0679eb3e,
              mid_set_e06ffef1ed339658,
              mid_setCharAt_931c9794de74ba08,
              mid_setLength_540b2b23d51b1efd,
              mid_size_20fbf7565993c3d7,
              mid_subSequence_3202de35bfd622a0,
              mid_toCharArray_77d52ded526199de,
              mid_toString_09a7afff1868fc5e,
              mid_unsafeWrite_97f8668422006638,
              mid_unsafeWrite_540b2b23d51b1efd,
              mid_unsafeWrite_fc9be2ded8ee801f,
              mid_write_cc40ee25f19f0868,
              mid_write_0d82408c6e55bc30,
              mid_write_d6820932352c1d0e,
              mid_write_97f8668422006638,
              mid_write_540b2b23d51b1efd,
              mid_write_fc9be2ded8ee801f,
              mid_resize_540b2b23d51b1efd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OpenStringBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OpenStringBuilder(const OpenStringBuilder& obj) : ::java::lang::Object(obj) {}

            OpenStringBuilder();
            OpenStringBuilder(jint);
            OpenStringBuilder(const JArray< jchar > &, jint);

            ::java::lang::Appendable append(jchar) const;
            ::java::lang::Appendable append(const ::java::lang::CharSequence &) const;
            ::java::lang::Appendable append(const ::java::lang::CharSequence &, jint, jint) const;
            jint capacity() const;
            jchar charAt(jint) const;
            void flush() const;
            JArray< jchar > getArray() const;
            jint length() const;
            void reserve(jint) const;
            void reset() const;
            void set(const JArray< jchar > &, jint) const;
            void setCharAt(jint, jchar) const;
            void setLength(jint) const;
            jint size() const;
            ::java::lang::CharSequence subSequence(jint, jint) const;
            JArray< jchar > toCharArray() const;
            ::java::lang::String toString() const;
            void unsafeWrite(jchar) const;
            void unsafeWrite(jint) const;
            void unsafeWrite(const JArray< jchar > &, jint, jint) const;
            void write(const JArray< jchar > &) const;
            void write(const ::java::lang::String &) const;
            void write(const OpenStringBuilder &) const;
            void write(jchar) const;
            void write(jint) const;
            void write(const JArray< jchar > &, jint, jint) const;
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
        namespace util {
          extern PyType_Def PY_TYPE_DEF(OpenStringBuilder);
          extern PyTypeObject *PY_TYPE(OpenStringBuilder);

          class t_OpenStringBuilder {
          public:
            PyObject_HEAD
            OpenStringBuilder object;
            static PyObject *wrap_Object(const OpenStringBuilder&);
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
