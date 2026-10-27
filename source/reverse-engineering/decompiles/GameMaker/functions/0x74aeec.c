// rea decompile_all
// name: FUN_0074aeec
// address: 0x74aeec
// body: available
// range: 0x74aeec-0x74b170 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x74af0d (push 0x74b171 followed by fs-segment stack chaining); handler 0x74b171 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0074aeec(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 extraout_var;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined4 unaff_EBX;
  uint uVar8;
  int iVar9;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int *in_FS_OFFSET;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined1 *local_2c;
  int *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  undefined4 local_c;
  int local_8;
  undefined2 uVar7;

  local_20 = &stack0xfffffffc;
  local_10 = 6;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_0074b171;
  local_28 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  local_2c = (undefined1 *)0x74af1d;
  local_8 = param_1;
  FUN_0043b2ec(param_1,100);
  iVar9 = *(int *)(local_8 + 0x14);
  local_2c = (undefined1 *)0x74af2a;
  cVar2 = FUN_0074eb4c(iVar9);
  if (cVar2 != '\0') {
    local_2c = (undefined1 *)0x74af3d;
    piVar4 = (int *)FUN_0074d8c8(iVar9,CONCAT22(extraout_var,1));
    uVar7 = (undefined2)((uint)extraout_EDX >> 0x10);
    uVar6 = extraout_EDX;
    if (piVar4 != (int *)0x0) {
      for (; uVar7 = (undefined2)((uint)uVar6 >> 0x10), piVar4[3] != 0; piVar4 = piVar4 + 5) {
        if (*piVar4 == 0) {
          if (*(char *)(iVar9 + 4) == '\0') {
            local_2c = (undefined1 *)0x74af68;
            FUN_0074e8a0(iVar9,piVar4[4]);
          }
          *(undefined1 *)(local_8 + 0x22) = 0;
        }
        else {
          local_2c = (undefined1 *)0x74af7d;
          FUN_0074e8a0(iVar9,*piVar4);
          *(undefined1 *)(local_8 + 0x22) = 1;
        }
        local_2c = (undefined1 *)0x74af91;
        uVar6 = FUN_0074e8a0(iVar9,piVar4[3]);
        local_2c = (undefined1 *)0x74afa0;
        FUN_00407140(&local_c,uVar6,0);
        local_28 = (int *)0x74afa8;
        uVar6 = FUN_00407a78(&stack0xffffffe4);
        local_28 = (int *)0x74afb2;
        cVar2 = FUN_00733cc8(local_c,uVar6);
        local_28 = (int *)0x74afc0;
        uStack_30._3_1_ = cVar2;
        FUN_00408130(&local_10,unaff_EDI);
        if (uStack_30._3_1_ == '\0') {
          local_28 = (int *)0x74afd1;
          FUN_004080e4(&local_10,local_c);
        }
        local_2c = (undefined1 *)0x0;
        uStack_30 = local_10;
        local_34 = 0;
        local_38 = 0x74afee;
        local_28 = piVar4;
        local_24 = (undefined1 *)FUN_0074a4ec(&PTR_LAB_00744a64,1,*(undefined4 *)(local_8 + 0x14));
        local_28 = (int *)0x74affc;
        FUN_0043ae88(local_8,local_24);
        local_28 = (int *)0x74b007;
        FUN_0074a9dc(local_24,&local_38);
        local_28 = (int *)0x74b012;
        FUN_00415ae8(local_38,&local_34);
        local_28 = (int *)0x74b023;
        (**(code **)(**(int **)(local_8 + 0x28) + 0x3c))
                  (*(int **)(local_8 + 0x28),local_34,local_24);
        uVar6 = extraout_EDX_00;
      }
    }
    local_2c = (undefined1 *)0x74b03b;
    iVar5 = FUN_0074d8c8(iVar9,CONCAT22(uVar7,0xd));
    uVar7 = extraout_var_00;
    if (iVar5 != 0) {
      if (*(char *)(iVar9 + 0x65) == '\x01') {
        uStack_30 = 0x74b053;
        local_2c = &stack0xfffffffc;
        FUN_0074ac8c();
        uVar7 = extraout_var_01;
      }
      else {
        uVar7 = 0;
        if (*(char *)(iVar9 + 0x65) == '\x02') {
          uStack_30 = 0x74b05c;
          local_2c = &stack0xfffffffc;
          FUN_0074adbc();
          uVar7 = extraout_var_02;
        }
      }
    }
    local_2c = (undefined1 *)0x74b068;
    piVar4 = (int *)FUN_0074d8c8(iVar9,CONCAT22(uVar7,0xb));
    local_28 = piVar4;
    if (piVar4 != (int *)0x0) {
      for (; (short)piVar4[1] != 0; piVar4 = piVar4 + 2) {
        local_2c = (undefined1 *)0x74b091;
        FUN_00407140(&local_c,(uint)*(ushort *)(piVar4 + 1) + (int)local_28,0);
        local_28 = (int *)0x74b099;
        uVar6 = FUN_00407a78(&local_20);
        local_28 = (int *)0x74b0a3;
        uVar3 = FUN_00733cc8(local_c,uVar6);
        uStack_30._0_3_ = CONCAT12(uVar3,(undefined2)uStack_30);
        local_28 = (int *)0x74b0b1;
        FUN_00408130(&stack0xffffffec,local_20);
        if (uStack_30._2_1_ == '\0') {
          local_28 = (int *)0x74b0c2;
          FUN_004080e4(&stack0xffffffec,local_c);
        }
        local_28 = (int *)0x74b0cd;
        FUN_00415ae8(unaff_EBX,&stack0xffffffe8);
        local_28 = (int *)0x74b0db;
        iVar9 = (**(code **)(**(int **)(local_8 + 0x28) + 0x54))
                          (*(int **)(local_8 + 0x28),unaff_ESI);
        if (-1 < iVar9) {
          local_2c = (undefined1 *)0x74b0ee;
          uVar6 = (**(code **)(**(int **)(local_8 + 0x28) + 0x18))(*(int **)(local_8 + 0x28),iVar9);
          local_2c = (undefined1 *)0x74b0f5;
          FUN_0074aa14(uVar6,2);
        }
        for (uVar8 = (uint)*(ushort *)((int)piVar4 + 6); uVar8 != 0; uVar8 = uVar8 - 1) {
          piVar4 = piVar4 + 2;
        }
      }
    }
    iVar9 = *(int *)(local_8 + 8);
    if (-1 < iVar9 + -1) {
      iVar5 = 0;
      do {
        local_2c = (undefined1 *)0x74b129;
        uVar6 = FUN_0074b19c(local_8,iVar5);
        local_2c = (undefined1 *)0x74b130;
        FUN_0074aa10(uVar6,iVar5);
        iVar5 = iVar5 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  puVar1 = local_20;
  *in_FS_OFFSET = (int)local_28;
  local_20 = &LAB_0074b178;
  local_24 = (undefined1 *)0x74b14e;
  thunk_FUN_00406e80(&local_38,2,puVar1);
  local_24 = (undefined1 *)0x74b15b;
  FUN_00407a90(&local_20,2);
  local_24 = (undefined1 *)0x74b168;
  thunk_FUN_00406e80(&stack0xffffffe8,3);
  local_24 = (undefined1 *)0x74b170;
  FUN_00406e5c(&local_c);
  return;
}
