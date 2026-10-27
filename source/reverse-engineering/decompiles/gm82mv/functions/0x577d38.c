// rea decompile_all
// name: FUN_00577d38
// address: 0x577d38
// body: available
// range: 0x577d38-0x578e5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x577d89 (push 0x578e5f followed by fs-segment stack chaining); handler 0x578e5f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00577d38(int param_1,int param_2,int param_3,int *param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  int iVar5;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 in_stack_00000000;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int *piVar9;
  undefined4 uStack_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_8;

  for (iVar5 = param_5; -1 < iVar5; iVar5 = iVar5 + -1) {
    unaff_EDI = *(undefined4 *)(param_6 + iVar5 * 4);
  }
  for (iVar5 = param_3 * 2 + 1; -1 < iVar5; iVar5 = iVar5 + -1) {
    unaff_EDI = *(undefined4 *)(param_2 + iVar5 * 4);
  }
  puVar7 = &stack0xffffffe8;
  puVar8 = &stack0xffffffe8;
  local_1c = (undefined1 *)0x577d7e;
  FUN_00409284(&stack0xffffffe8,"\n\nAnsiString",param_5 + 1);
  local_20 = &LAB_00578e5f;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar5 = DAT_0084efc4 + param_1 * 0x60;
  iVar1 = *(int *)(iVar5 + 0x5c);
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  iVar2 = *(int *)(iVar5 + 0x14);
  if (0 < iVar2) {
    if (*(int *)(iVar5 + 0x18) == 0) {
      uVar3 = uVar3 + 10;
    }
    else {
      uVar3 = uVar3 + 0x14;
    }
  }
  if (1 < iVar2) {
    if (*(int *)(iVar5 + 0x1c) == 0) {
      uVar3 = uVar3 + 100;
    }
    else {
      uVar3 = uVar3 + 200;
    }
  }
  if (2 < iVar2) {
    if (*(int *)(iVar5 + 0x20) == 0) {
      uVar3 = uVar3 + 1000;
    }
    else {
      uVar3 = uVar3 + 2000;
    }
  }
  if (3 < iVar2) {
    if (*(int *)(iVar5 + 0x24) == 0) {
      uVar3 = uVar3 + 10000;
    }
    else {
      uVar3 = uVar3 + 20000;
    }
  }
  *param_4 = iVar1;
  if (uVar3 < 0x2b69) {
    if (uVar3 == 0x2b68) {
      piVar9 = param_4;
      local_1c = &stack0xfffffffc;
      uVar4 = (**(code **)(iVar5 + 0xc))();
      FUN_00407590(param_4 + 4,uVar4,0xfde9,piVar9);
    }
    else if (uVar3 < 0x459) {
      if (uVar3 == 0x458) {
        local_1c = &stack0xfffffffc;
        uVar4 = (**(code **)(iVar5 + 0xc))();
        FUN_00407590(param_4 + 4,uVar4,0xfde9,unaff_EBP);
      }
      else if (uVar3 < 0x71) {
        if (uVar3 == 0x70) {
          local_1c = &stack0xfffffffc;
          uVar4 = (**(code **)(iVar5 + 0xc))();
          FUN_00407590(param_4 + 4,uVar4,0xfde9,puVar7);
        }
        else if (uVar3 < 0xd) {
          if (uVar3 == 0xc) {
            local_1c = &stack0xfffffffc;
            uVar4 = (**(code **)(iVar5 + 0xc))();
            FUN_00407590(param_4 + 4,uVar4,0xfde9,unaff_ESI);
          }
          else if (uVar3 == 1) {
            local_1c = &stack0xfffffffc;
            (**(code **)(iVar5 + 0xc))();
            *(double *)(param_4 + 2) = (double)in_ST0;
          }
          else if (uVar3 == 2) {
            uVar6 = 0x5780e4;
            local_1c = &stack0xfffffffc;
            uVar4 = (**(code **)(iVar5 + 0xc))();
            FUN_00407590(param_4 + 4,uVar4,0xfde9,uVar6);
          }
          else if (uVar3 == 0xb) {
            local_1c = &stack0xfffffffc;
            (**(code **)(iVar5 + 0xc))();
            *(double *)(param_4 + 2) = (double)in_ST0;
          }
        }
        else if (uVar3 == 0x15) {
          local_1c = &stack0xfffffffc;
          FUN_00407ae0(unaff_EDI);
          (**(code **)(iVar5 + 0xc))();
          *(double *)(param_4 + 2) = (double)in_ST0;
        }
        else if (uVar3 == 0x16) {
          local_1c = &stack0xfffffffc;
          uVar4 = FUN_00407ae0(unaff_EDI);
          uVar6 = (**(code **)(iVar5 + 0xc))();
          FUN_00407590(param_4 + 4,uVar6,0xfde9,uVar4);
        }
        else if (uVar3 == 0x6f) {
          local_1c = &stack0xfffffffc;
          (**(code **)(iVar5 + 0xc))();
          *(double *)(param_4 + 2) = (double)in_ST0;
        }
      }
      else if (uVar3 < 0xd5) {
        if (uVar3 == 0xd4) {
          local_1c = &stack0xfffffffc;
          uVar4 = FUN_00407ae0(unaff_ESI);
          uVar6 = (**(code **)(iVar5 + 0xc))();
          FUN_00407590(param_4 + 4,uVar6,0xfde9,uVar4);
        }
        else if (uVar3 == 0x79) {
          local_1c = &stack0xfffffffc;
          FUN_00407ae0(unaff_EDI,param_4,iVar1,unaff_EBX,&stack0xffffffe8);
          (**(code **)(iVar5 + 0xc))();
          *(double *)(param_4 + 2) = (double)in_ST0;
        }
        else if (uVar3 == 0x7a) {
          local_1c = &stack0xfffffffc;
          FUN_00407ae0(unaff_EDI,param_4,iVar1,unaff_EBX,&stack0xffffffe8);
          uVar4 = (**(code **)(iVar5 + 0xc))();
          FUN_00407590(param_4 + 4,uVar4,0xfde9,puVar8);
        }
        else if (uVar3 == 0xd3) {
          local_1c = &stack0xfffffffc;
          FUN_00407ae0(unaff_ESI);
          (**(code **)(iVar5 + 0xc))();
          *(double *)(param_4 + 2) = (double)in_ST0;
        }
      }
      else if (uVar3 == 0xdd) {
        local_1c = &stack0xfffffffc;
        FUN_00407ae0(unaff_ESI);
        FUN_00407ae0(unaff_EDI);
        (**(code **)(iVar5 + 0xc))();
        *(double *)(param_4 + 2) = (double)in_ST0;
      }
      else if (uVar3 == 0xde) {
        local_1c = &stack0xfffffffc;
        uVar4 = FUN_00407ae0(unaff_ESI);
        FUN_00407ae0(unaff_EDI);
        uVar6 = (**(code **)(iVar5 + 0xc))();
        FUN_00407590(param_4 + 4,uVar6,0xfde9,uVar4);
      }
      else if (uVar3 == 0x457) {
        local_1c = &stack0xfffffffc;
        (**(code **)(iVar5 + 0xc))();
        *(double *)(param_4 + 2) = (double)in_ST0;
      }
    }
    else if (uVar3 < 0x841) {
      if (uVar3 == 0x840) {
        local_1c = &stack0xfffffffc;
        uVar4 = FUN_00407ae0(unaff_EBX);
        uVar6 = (**(code **)(iVar5 + 0xc))();
        FUN_00407590(param_4 + 4,uVar6,0xfde9,uVar4);
      }
      else if (uVar3 < 0x4bd) {
        if (uVar3 == 0x4bc) {
          local_1c = &stack0xfffffffc;
          FUN_00407ae0(unaff_ESI,param_4,iVar1,local_8,unaff_EBP);
          uVar4 = (**(code **)(iVar5 + 0xc))();
          FUN_00407590(param_4 + 4,uVar4,0xfde9,unaff_EBP);
        }
        else if (uVar3 == 0x461) {
          local_1c = &stack0xfffffffc;
          FUN_00407ae0(unaff_EDI,param_4,iVar1,unaff_EBX,&stack0xffffffe8,local_8,unaff_EBP);
          (**(code **)(iVar5 + 0xc))();
          *(double *)(param_4 + 2) = (double)in_ST0;
        }
        else if (uVar3 == 0x462) {
          local_1c = &stack0xfffffffc;
          FUN_00407ae0(unaff_EDI,param_4,iVar1,unaff_EBX,&stack0xffffffe8,local_8,unaff_EBP);
          uVar4 = (**(code **)(iVar5 + 0xc))();
          FUN_00407590(param_4 + 4,uVar4,0xfde9,unaff_EBP);
        }
        else if (uVar3 == 0x4bb) {
          local_1c = &stack0xfffffffc;
          FUN_00407ae0(unaff_ESI,param_4,iVar1,local_8,unaff_EBP);
          (**(code **)(iVar5 + 0xc))();
          *(double *)(param_4 + 2) = (double)in_ST0;
        }
      }
      else if (uVar3 == 0x4c5) {
        local_1c = &stack0xfffffffc;
        FUN_00407ae0(unaff_ESI,param_4,iVar1,local_8,unaff_EBP);
        FUN_00407ae0(unaff_EDI);
        (**(code **)(iVar5 + 0xc))();
        *(double *)(param_4 + 2) = (double)in_ST0;
      }
      else if (uVar3 == 0x4c6) {
        local_1c = &stack0xfffffffc;
        FUN_00407ae0(unaff_ESI,param_4,iVar1,local_8,unaff_EBP);
        FUN_00407ae0(unaff_EDI);
        uVar4 = (**(code **)(iVar5 + 0xc))();
        FUN_00407590(param_4 + 4,uVar4,0xfde9,unaff_EBP);
      }
      else if (uVar3 == 0x83f) {
        local_1c = &stack0xfffffffc;
        FUN_00407ae0(unaff_EBX);
        (**(code **)(iVar5 + 0xc))();
        *(double *)(param_4 + 2) = (double)in_ST0;
      }
    }
    else if (uVar3 < 0x8a5) {
      if (uVar3 == 0x8a4) {
        local_1c = &stack0xfffffffc;
        uVar4 = FUN_00407ae0(unaff_EBX);
        FUN_00407ae0(unaff_ESI);
        uVar6 = (**(code **)(iVar5 + 0xc))();
        FUN_00407590(param_4 + 4,uVar6,0xfde9,uVar4);
      }
      else if (uVar3 == 0x849) {
        local_1c = &stack0xfffffffc;
        FUN_00407ae0(unaff_EBX);
        FUN_00407ae0(unaff_EDI);
        (**(code **)(iVar5 + 0xc))();
        *(double *)(param_4 + 2) = (double)in_ST0;
      }
      else if (uVar3 == 0x84a) {
        local_1c = &stack0xfffffffc;
        uVar4 = FUN_00407ae0(unaff_EBX);
        FUN_00407ae0(unaff_EDI);
        uVar6 = (**(code **)(iVar5 + 0xc))();
        FUN_00407590(param_4 + 4,uVar6,0xfde9,uVar4);
      }
      else if (uVar3 == 0x8a3) {
        local_1c = &stack0xfffffffc;
        FUN_00407ae0(unaff_EBX);
        FUN_00407ae0(unaff_ESI);
        (**(code **)(iVar5 + 0xc))();
        *(double *)(param_4 + 2) = (double)in_ST0;
      }
    }
    else if (uVar3 == 0x8ad) {
      local_1c = &stack0xfffffffc;
      FUN_00407ae0(unaff_EBX);
      FUN_00407ae0(unaff_ESI);
      FUN_00407ae0(unaff_EDI);
      (**(code **)(iVar5 + 0xc))();
      *(double *)(param_4 + 2) = (double)in_ST0;
    }
    else if (uVar3 == 0x8ae) {
      local_1c = &stack0xfffffffc;
      uVar4 = FUN_00407ae0(unaff_EBX);
      FUN_00407ae0(unaff_ESI);
      FUN_00407ae0(unaff_EDI);
      uVar6 = (**(code **)(iVar5 + 0xc))();
      FUN_00407590(param_4 + 4,uVar6,0xfde9,uVar4);
    }
    else if (uVar3 == 0x2b67) {
      local_1c = &stack0xfffffffc;
      (**(code **)(iVar5 + 0xc))();
      *(double *)(param_4 + 2) = (double)in_ST0;
    }
  }
  else if (uVar3 < 0x5279) {
    if (uVar3 == 0x5278) {
      local_1c = &stack0xfffffffc;
      uVar4 = FUN_00407ae0(&stack0xffffffe8);
      uVar6 = (**(code **)(iVar5 + 0xc))();
      FUN_00407590(param_4 + 4,uVar6,0xfde9,uVar4);
    }
    else if (uVar3 < 0x2f51) {
      if (uVar3 == 0x2f50) {
        piVar9 = param_4;
        local_1c = &stack0xfffffffc;
        FUN_00407ae0(unaff_EBX,param_4,iVar1,in_stack_00000000,param_4);
        uVar4 = (**(code **)(iVar5 + 0xc))();
        FUN_00407590(param_4 + 4,uVar4,0xfde9,piVar9);
      }
      else if (uVar3 < 0x2bcd) {
        if (uVar3 == 0x2bcc) {
          piVar9 = param_4;
          local_1c = &stack0xfffffffc;
          FUN_00407ae0(unaff_ESI,param_4,iVar1,local_8,unaff_EBP,in_stack_00000000,param_4);
          uVar4 = (**(code **)(iVar5 + 0xc))();
          FUN_00407590(param_4 + 4,uVar4,0xfde9,piVar9);
        }
        else if (uVar3 == 0x2b71) {
          local_1c = &stack0xfffffffc;
          FUN_00407ae0(unaff_EDI,param_4,iVar1,unaff_EBX,&stack0xffffffe8,local_8,unaff_EBP,
                       in_stack_00000000,param_4);
          (**(code **)(iVar5 + 0xc))();
          *(double *)(param_4 + 2) = (double)in_ST0;
        }
        else if (uVar3 == 0x2b72) {
          piVar9 = param_4;
          local_1c = &stack0xfffffffc;
          FUN_00407ae0(unaff_EDI,param_4,iVar1,unaff_EBX,&stack0xffffffe8,local_8,unaff_EBP,
                       in_stack_00000000,param_4);
          uVar4 = (**(code **)(iVar5 + 0xc))();
          FUN_00407590(param_4 + 4,uVar4,0xfde9,piVar9);
        }
        else if (uVar3 == 0x2bcb) {
          local_1c = &stack0xfffffffc;
          FUN_00407ae0(unaff_ESI,param_4,iVar1,local_8,unaff_EBP,in_stack_00000000,param_4);
          (**(code **)(iVar5 + 0xc))();
          *(double *)(param_4 + 2) = (double)in_ST0;
        }
      }
      else if (uVar3 == 0x2bd5) {
        local_1c = &stack0xfffffffc;
        FUN_00407ae0(unaff_ESI,param_4,iVar1,local_8,unaff_EBP,in_stack_00000000,param_4);
        FUN_00407ae0(unaff_EDI);
        (**(code **)(iVar5 + 0xc))();
        *(double *)(param_4 + 2) = (double)in_ST0;
      }
      else if (uVar3 == 0x2bd6) {
        piVar9 = param_4;
        local_1c = &stack0xfffffffc;
        FUN_00407ae0(unaff_ESI,param_4,iVar1,local_8,unaff_EBP,in_stack_00000000,param_4);
        FUN_00407ae0(unaff_EDI);
        uVar4 = (**(code **)(iVar5 + 0xc))();
        FUN_00407590(param_4 + 4,uVar4,0xfde9,piVar9);
      }
      else if (uVar3 == 0x2f4f) {
        local_1c = &stack0xfffffffc;
        FUN_00407ae0(unaff_EBX,param_4,iVar1,in_stack_00000000,param_4);
        (**(code **)(iVar5 + 0xc))();
        *(double *)(param_4 + 2) = (double)in_ST0;
      }
    }
    else if (uVar3 < 0x2fb5) {
      if (uVar3 == 0x2fb4) {
        piVar9 = param_4;
        local_1c = &stack0xfffffffc;
        FUN_00407ae0(unaff_EBX,param_4,iVar1,in_stack_00000000,param_4);
        FUN_00407ae0(unaff_ESI);
        uVar4 = (**(code **)(iVar5 + 0xc))();
        FUN_00407590(param_4 + 4,uVar4,0xfde9,piVar9);
      }
      else if (uVar3 == 0x2f59) {
        local_1c = &stack0xfffffffc;
        FUN_00407ae0(unaff_EBX,param_4,iVar1,in_stack_00000000,param_4);
        FUN_00407ae0(unaff_EDI);
        (**(code **)(iVar5 + 0xc))();
        *(double *)(param_4 + 2) = (double)in_ST0;
      }
      else if (uVar3 == 0x2f5a) {
        piVar9 = param_4;
        local_1c = &stack0xfffffffc;
        FUN_00407ae0(unaff_EBX,param_4,iVar1,in_stack_00000000,param_4);
        FUN_00407ae0(unaff_EDI);
        uVar4 = (**(code **)(iVar5 + 0xc))();
        FUN_00407590(param_4 + 4,uVar4,0xfde9,piVar9);
      }
      else if (uVar3 == 0x2fb3) {
        local_1c = &stack0xfffffffc;
        FUN_00407ae0(unaff_EBX,param_4,iVar1,in_stack_00000000,param_4);
        FUN_00407ae0(unaff_ESI);
        (**(code **)(iVar5 + 0xc))();
        *(double *)(param_4 + 2) = (double)in_ST0;
      }
    }
    else if (uVar3 == 0x2fbd) {
      local_1c = &stack0xfffffffc;
      FUN_00407ae0(unaff_EBX,param_4,iVar1,in_stack_00000000,param_4);
      FUN_00407ae0(unaff_ESI);
      FUN_00407ae0(unaff_EDI);
      (**(code **)(iVar5 + 0xc))();
      *(double *)(param_4 + 2) = (double)in_ST0;
    }
    else if (uVar3 == 0x2fbe) {
      piVar9 = param_4;
      local_1c = &stack0xfffffffc;
      FUN_00407ae0(unaff_EBX,param_4,iVar1,in_stack_00000000,param_4);
      FUN_00407ae0(unaff_ESI);
      FUN_00407ae0(unaff_EDI);
      uVar4 = (**(code **)(iVar5 + 0xc))();
      FUN_00407590(param_4 + 4,uVar4,0xfde9,piVar9);
    }
    else if (uVar3 == 0x5277) {
      local_1c = &stack0xfffffffc;
      FUN_00407ae0(&stack0xffffffe8);
      (**(code **)(iVar5 + 0xc))();
      *(double *)(param_4 + 2) = (double)in_ST0;
    }
  }
  else if (uVar3 < 0x5661) {
    if (uVar3 == 0x5660) {
      local_1c = &stack0xfffffffc;
      uVar4 = FUN_00407ae0(&stack0xffffffe8);
      FUN_00407ae0(unaff_EBX);
      uVar6 = (**(code **)(iVar5 + 0xc))();
      FUN_00407590(param_4 + 4,uVar6,0xfde9,uVar4);
    }
    else if (uVar3 < 0x52dd) {
      if (uVar3 == 0x52dc) {
        local_1c = &stack0xfffffffc;
        uVar4 = FUN_00407ae0(&stack0xffffffe8);
        FUN_00407ae0(unaff_ESI);
        uVar6 = (**(code **)(iVar5 + 0xc))();
        FUN_00407590(param_4 + 4,uVar6,0xfde9,uVar4);
      }
      else if (uVar3 == 0x5281) {
        local_1c = &stack0xfffffffc;
        FUN_00407ae0(&stack0xffffffe8);
        FUN_00407ae0(unaff_EDI);
        (**(code **)(iVar5 + 0xc))();
        *(double *)(param_4 + 2) = (double)in_ST0;
      }
      else if (uVar3 == 0x5282) {
        local_1c = &stack0xfffffffc;
        uVar4 = FUN_00407ae0(&stack0xffffffe8);
        FUN_00407ae0(unaff_EDI);
        uVar6 = (**(code **)(iVar5 + 0xc))();
        FUN_00407590(param_4 + 4,uVar6,0xfde9,uVar4);
      }
      else if (uVar3 == 0x52db) {
        local_1c = &stack0xfffffffc;
        FUN_00407ae0(&stack0xffffffe8);
        FUN_00407ae0(unaff_ESI);
        (**(code **)(iVar5 + 0xc))();
        *(double *)(param_4 + 2) = (double)in_ST0;
      }
    }
    else if (uVar3 == 0x52e5) {
      local_1c = &stack0xfffffffc;
      FUN_00407ae0(&stack0xffffffe8);
      FUN_00407ae0(unaff_ESI);
      FUN_00407ae0(unaff_EDI);
      (**(code **)(iVar5 + 0xc))();
      *(double *)(param_4 + 2) = (double)in_ST0;
    }
    else if (uVar3 == 0x52e6) {
      local_1c = &stack0xfffffffc;
      uVar4 = FUN_00407ae0(&stack0xffffffe8);
      FUN_00407ae0(unaff_ESI);
      FUN_00407ae0(unaff_EDI);
      uVar6 = (**(code **)(iVar5 + 0xc))();
      FUN_00407590(param_4 + 4,uVar6,0xfde9,uVar4);
    }
    else if (uVar3 == 0x565f) {
      local_1c = &stack0xfffffffc;
      FUN_00407ae0(&stack0xffffffe8);
      FUN_00407ae0(unaff_EBX);
      (**(code **)(iVar5 + 0xc))();
      *(double *)(param_4 + 2) = (double)in_ST0;
    }
  }
  else if (uVar3 < 0x56c5) {
    if (uVar3 == 0x56c4) {
      local_1c = &stack0xfffffffc;
      uVar4 = FUN_00407ae0(&stack0xffffffe8);
      FUN_00407ae0(unaff_EBX);
      FUN_00407ae0(unaff_ESI);
      uVar6 = (**(code **)(iVar5 + 0xc))();
      FUN_00407590(param_4 + 4,uVar6,0xfde9,uVar4);
    }
    else if (uVar3 == 0x5669) {
      local_1c = &stack0xfffffffc;
      FUN_00407ae0(&stack0xffffffe8);
      FUN_00407ae0(unaff_EBX);
      FUN_00407ae0(unaff_EDI);
      (**(code **)(iVar5 + 0xc))();
      *(double *)(param_4 + 2) = (double)in_ST0;
    }
    else if (uVar3 == 0x566a) {
      local_1c = &stack0xfffffffc;
      uVar4 = FUN_00407ae0(&stack0xffffffe8);
      FUN_00407ae0(unaff_EBX);
      FUN_00407ae0(unaff_EDI);
      uVar6 = (**(code **)(iVar5 + 0xc))();
      FUN_00407590(param_4 + 4,uVar6,0xfde9,uVar4);
    }
    else if (uVar3 == 0x56c3) {
      local_1c = &stack0xfffffffc;
      FUN_00407ae0(&stack0xffffffe8);
      FUN_00407ae0(unaff_EBX);
      FUN_00407ae0(unaff_ESI);
      (**(code **)(iVar5 + 0xc))();
      *(double *)(param_4 + 2) = (double)in_ST0;
    }
  }
  else if (uVar3 == 0x56cd) {
    local_1c = &stack0xfffffffc;
    FUN_00407ae0(&stack0xffffffe8);
    FUN_00407ae0(unaff_EBX);
    FUN_00407ae0(unaff_ESI);
    FUN_00407ae0(unaff_EDI);
    (**(code **)(iVar5 + 0xc))();
    *(double *)(param_4 + 2) = (double)in_ST0;
  }
  else if (uVar3 == 0x56ce) {
    local_1c = &stack0xfffffffc;
    uVar4 = FUN_00407ae0(&stack0xffffffe8);
    FUN_00407ae0(unaff_EBX);
    FUN_00407ae0(unaff_ESI);
    FUN_00407ae0(unaff_EDI);
    uVar6 = (**(code **)(iVar5 + 0xc))();
    FUN_00407590(param_4 + 4,uVar6,0xfde9,uVar4);
  }
  *in_FS_OFFSET = uStack_24;
  local_1c = &LAB_00578e66;
  local_20 = (undefined1 *)0x578e5e;
  FUN_00409120(&stack0xffffffe8,"\n\nAnsiString",param_5 + 1);
  return;
}
