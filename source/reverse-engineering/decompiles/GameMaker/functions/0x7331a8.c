// rea decompile_all
// name: FUN_007331a8
// address: 0x7331a8
// body: available
// range: 0x7331a8-0x7336a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x7331c7 (push 0x7336a3 followed by fs-segment stack chaining); handler 0x7336a3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_007331a8(int param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  uint local_c;
  int local_8;

  puStack_14 = (undefined1 *)0x7331bc;
  local_8 = param_1;
  FUN_00407660(param_1);
  puStack_18 = &LAB_007336a3;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar2 = local_8;
  puStack_14 = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_14 = &stack0xfffffffc, *(short *)(local_8 + -10) != 1)) {
    puStack_14 = &stack0xfffffffc;
    iVar2 = FUN_00407078(&local_8,local_8,0);
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
  }
  if ((iVar3 < *param_2) || (*param_2 < 1)) {
    local_c = 0;
    FUN_00733198(param_2,0,&local_c);
    goto LAB_0073368d;
  }
  local_c = (uint)*(byte *)(local_8 + -1 + *param_2);
  if (local_c < 0xf0) {
    if (local_c < 0x80) {
      *param_2 = *param_2 + 1;
      goto LAB_0073368d;
    }
    if (local_c - 0xc0 < 0x20) {
      if (*param_2 < iVar3) {
        if ((*(byte *)(local_8 + *param_2) & 0xc0) == 0x80) {
          local_c = (local_c & 0x1f) << 6 | *(byte *)(local_8 + *param_2) & 0x3f;
          *param_2 = *param_2 + 2;
        }
        else {
          FUN_00733198(param_2,1,&local_c);
        }
      }
      else {
        FUN_00733198(param_2,1,&local_c);
      }
      goto LAB_0073368d;
    }
    if (local_c - 0xe0 < 0x10) {
      if (*param_2 + 1 < iVar3) {
        if ((*(byte *)(local_8 + *param_2) & 0xc0) == 0x80) {
          local_c = (local_c & 0xf) << 0xc | (*(byte *)(local_8 + *param_2) & 0x3f) << 6;
          uVar4 = (uint)*(byte *)(local_8 + 1 + *param_2);
          if ((uVar4 & 0xc0) == 0x80) {
            local_c = local_c | uVar4 & 0x3f;
            *param_2 = *param_2 + 3;
          }
          else {
            FUN_00733198(param_2,2,&local_c);
          }
        }
        else {
          FUN_00733198(param_2,1,&local_c);
        }
      }
      else {
        FUN_00733198(param_2,1,&local_c);
      }
      goto LAB_0073368d;
    }
  }
  else {
    if (local_c - 0xf0 < 8) {
      if (*param_2 + 2 < iVar3) {
        if ((*(byte *)(local_8 + *param_2) & 0xc0) == 0x80) {
          local_c = (local_c & 7) << 0x12 | (*(byte *)(local_8 + *param_2) & 0x3f) << 0xc;
          uVar4 = (uint)*(byte *)(local_8 + 1 + *param_2);
          if ((uVar4 & 0xc0) == 0x80) {
            local_c = local_c | (uVar4 & 0x3f) << 6;
            uVar4 = (uint)*(byte *)(local_8 + 2 + *param_2);
            if ((uVar4 & 0xc0) == 0x80) {
              local_c = local_c | uVar4 & 0x3f;
              *param_2 = *param_2 + 4;
            }
            else {
              FUN_00733198(param_2,3,&local_c);
            }
          }
          else {
            FUN_00733198(param_2,2,&local_c);
          }
        }
        else {
          FUN_00733198(param_2,1,&local_c);
        }
      }
      else {
        FUN_00733198(param_2,1,&local_c);
      }
      goto LAB_0073368d;
    }
    if (local_c - 0xf8 < 4) {
      if (*param_2 + 3 < iVar3) {
        if ((*(byte *)(local_8 + *param_2) & 0xc0) == 0x80) {
          local_c = (local_c & 3) << 0x18 | (*(byte *)(local_8 + *param_2) & 0x3f) << 0x12;
          uVar4 = (uint)*(byte *)(local_8 + 1 + *param_2);
          if ((uVar4 & 0xc0) == 0x80) {
            local_c = local_c | (uVar4 & 0x3f) << 0xc;
            uVar4 = (uint)*(byte *)(local_8 + 2 + *param_2);
            if ((uVar4 & 0xc0) == 0x80) {
              local_c = local_c | (uVar4 & 0x3f) << 6;
              uVar4 = (uint)*(byte *)(local_8 + 3 + *param_2);
              if ((uVar4 & 0xc0) == 0x80) {
                local_c = local_c | uVar4 & 0x3f;
                *param_2 = *param_2 + 5;
              }
              else {
                FUN_00733198(param_2,4,&local_c);
              }
            }
            else {
              FUN_00733198(param_2,3,&local_c);
            }
          }
          else {
            FUN_00733198(param_2,2,&local_c);
          }
        }
        else {
          FUN_00733198(param_2,1,&local_c);
        }
      }
      else {
        FUN_00733198(param_2,1,&local_c);
      }
      goto LAB_0073368d;
    }
    if (local_c - 0xfc < 2) {
      if (*param_2 + 4 < iVar3) {
        if ((*(byte *)(local_8 + *param_2) & 0xc0) == 0x80) {
          local_c = (local_c & 1) << 0x1e | (uint)(*(byte *)(local_8 + *param_2) & 0x3f) << 0x18;
          uVar4 = (uint)*(byte *)(local_8 + 1 + *param_2);
          if ((uVar4 & 0xc0) == 0x80) {
            local_c = local_c | (uVar4 & 0x3f) << 0x12;
            uVar4 = (uint)*(byte *)(local_8 + 2 + *param_2);
            if ((uVar4 & 0xc0) == 0x80) {
              local_c = local_c | (uVar4 & 0x3f) << 0xc;
              uVar4 = (uint)*(byte *)(local_8 + 3 + *param_2);
              if ((uVar4 & 0xc0) == 0x80) {
                local_c = local_c | (uVar4 & 0x3f) << 6;
                uVar4 = (uint)*(byte *)(local_8 + 4 + *param_2);
                if ((uVar4 & 0xc0) == 0x80) {
                  local_c = local_c | uVar4 & 0x3f;
                  *param_2 = *param_2 + 6;
                }
                else {
                  FUN_00733198(param_2,5,&local_c);
                }
              }
              else {
                FUN_00733198(param_2,4,&local_c);
              }
            }
            else {
              FUN_00733198(param_2,3,&local_c);
            }
          }
          else {
            FUN_00733198(param_2,2,&local_c);
          }
        }
        else {
          FUN_00733198(param_2,1,&local_c);
        }
      }
      else {
        FUN_00733198(param_2,1,&local_c);
      }
      goto LAB_0073368d;
    }
  }
  FUN_00733198(param_2,1,&local_c);
LAB_0073368d:
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_007336aa;
  puStack_18 = (undefined1 *)0x7336a2;
  FUN_00406e5c(&local_8,uStack_1c,puVar1);
  return;
}
