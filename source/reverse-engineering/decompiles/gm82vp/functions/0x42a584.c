// rea decompile_all
// name: FUN_0042a584
// address: 0x42a584
// body: available
// range: 0x42a584-0x42a68f inclusive
// range: 0x42a697-0x42a71e inclusive
// range: 0x42a726-0x42a80f inclusive
// range: 0x42a817-0x42a8b2 inclusive
// range: 0x42a8ba-0x42a969 inclusive
// range: 0x42a971-0x42a9a7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42a62f (push 0x42a690 followed by fs-segment stack chaining); handler 0x42a690 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42a6d6 (push 0x42a71f followed by fs-segment stack chaining); handler 0x42a71f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42a7b3 (push 0x42a810 followed by fs-segment stack chaining); handler 0x42a810 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42a868 (push 0x42a8b3 followed by fs-segment stack chaining); handler 0x42a8b3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42a90d (push 0x42a96a followed by fs-segment stack chaining); handler 0x42a96a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0042a584(ushort *param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int *in_FS_OFFSET;
  int iStackY_4c;
  undefined1 *puStackY_48;
  undefined1 *puVar5;
  undefined1 *puVar6;
  _union_2683 local_30;
  int *local_20;
  int *local_1c;
  ushort local_16;
  ushort local_14;
  byte local_11;
  int local_10;
  ushort *local_c;

  puVar5 = &stack0xfffffffc;
  puVar6 = &stack0xfffffffc;
  local_11 = 1;
  uVar1 = *param_1;
  local_10 = param_3;
  local_c = param_2;
  if ((uVar1 & 0xfff) < 0x10f) {
    if (uVar1 == 0) {
      local_11 = FUN_0042a158(1,0);
    }
    else if (uVar1 == 1) {
      local_11 = FUN_0042a16c(2,0,param_3);
    }
    else {
      cVar3 = FUN_0042b560(*param_2,&local_20);
      if (cVar3 == '\0') {
        FUN_00424300();
      }
      else {
        cVar3 = (**(code **)(*local_20 + 4))(local_20,param_1,0xb);
        if (cVar3 == '\0') {
          VariantInit((VARIANTARG *)&local_30.n2);
          puStackY_48 = (undefined1 *)*in_FS_OFFSET;
          *in_FS_OFFSET = (int)&puStackY_48;
          iStackY_4c = 0x42a6e7;
          FUN_00425134(&local_30,local_c,*param_1);
          if ((local_30.n2.vt & 0xfff) != *param_1) {
            iStackY_4c = 0x42a6f9;
            FUN_00424210();
          }
          iStackY_4c = 0x42a706;
          local_11 = FUN_0042a3d8(param_1,&local_30,local_10);
          *in_FS_OFFSET = (int)puStackY_48;
          uVar4 = FUN_00424ab4(&local_30,puStackY_48,puVar5);
          return uVar4;
        }
        if (*param_1 != local_14) {
          VariantInit((VARIANTARG *)&local_30.n2);
          puVar5 = &LAB_0042a690;
          puStackY_48 = (undefined1 *)*in_FS_OFFSET;
          *in_FS_OFFSET = (int)&puStackY_48;
          iStackY_4c = 0x42a640;
          FUN_00425134(&local_30,param_1,local_14);
          if ((local_30.n2.vt & 0xfff) != local_14) {
            iStackY_4c = 0x42a653;
            FUN_00424210();
          }
          iStackY_4c = local_10;
          uVar4 = (**(code **)(*local_20 + 0x34))(local_20,&local_30,local_c);
          local_11 = (&DAT_0067ce94)[(uVar4 & 0x7f) + local_10 * 2];
          *in_FS_OFFSET = iStackY_4c;
          puStackY_48 = (undefined1 *)0x42a68f;
          uVar4 = FUN_00424ab4(&local_30,iStackY_4c,puVar5);
          return uVar4;
        }
        uVar4 = (**(code **)(*local_20 + 0x34))(local_20,param_1,local_c);
        local_11 = (&DAT_0067ce94)[(uVar4 & 0x7f) + local_10 * 2];
      }
    }
  }
  else if (*param_2 == 0) {
    local_11 = FUN_0042a158(0,1);
  }
  else if (*param_2 == 1) {
    local_11 = FUN_0042a16c(0,2,param_3);
  }
  else {
    cVar3 = FUN_0042b560(uVar1,&local_1c);
    if (cVar3 == '\0') {
      FUN_00424300();
    }
    else {
      cVar3 = (**(code **)(*local_1c + 8))(local_1c,local_c,0xb);
      if (cVar3 == '\0') {
        if ((*local_c & 0xfff) < 0x10f) {
          VariantInit((VARIANTARG *)&local_30.n2);
          puStackY_48 = (undefined1 *)*in_FS_OFFSET;
          *in_FS_OFFSET = (int)&puStackY_48;
          iStackY_4c = 0x42a87b;
          FUN_00425134(&local_30,param_1,*local_c);
          if (*local_c != local_30.n2.vt) {
            iStackY_4c = 0x42a88c;
            FUN_00424210();
          }
          iStackY_4c = 0x42a89a;
          local_11 = FUN_0042a3d8(&local_30,local_c,local_10);
          *in_FS_OFFSET = (int)puStackY_48;
          uVar4 = FUN_00424ab4(&local_30,puStackY_48,puVar6);
          return uVar4;
        }
        cVar3 = FUN_0042b560(*local_c,&local_20);
        if (cVar3 == '\0') {
          FUN_00424300();
        }
        else {
          cVar3 = (**(code **)(*local_20 + 4))(local_20,param_1,0xb);
          if (cVar3 == '\0') {
            FUN_00424300();
          }
          else {
            if (*param_1 != local_14) {
              puStackY_48 = (undefined1 *)0x42a902;
              VariantInit((VARIANTARG *)&local_30.n2);
              puStackY_48 = &LAB_0042a96a;
              iStackY_4c = *in_FS_OFFSET;
              *in_FS_OFFSET = (int)&iStackY_4c;
              FUN_00425134(&local_30,param_1,local_14);
              if (local_30.n2.vt != local_14) {
                FUN_00424210();
              }
              iVar2 = local_10;
              uVar4 = (**(code **)(*local_20 + 0x34))(local_20,&local_30,local_c);
              puVar5 = puStackY_48;
              local_11 = (&DAT_0067ce94)[(uVar4 & 0x7f) + local_10 * 2];
              *in_FS_OFFSET = iVar2;
              puStackY_48 = (undefined1 *)0x42a99e;
              iStackY_4c = 0x42a969;
              uVar4 = FUN_00424ab4(&local_30,iVar2,puVar5);
              return uVar4;
            }
            puStackY_48 = (undefined1 *)0x42a982;
            uVar4 = (**(code **)(*local_20 + 0x34))(local_20,param_1,local_c);
            local_11 = (&DAT_0067ce94)[(uVar4 & 0x7f) + local_10 * 2];
          }
        }
      }
      else {
        if (*local_c != local_16) {
          VariantInit((VARIANTARG *)&local_30.n2);
          puVar5 = &LAB_0042a810;
          puStackY_48 = (undefined1 *)*in_FS_OFFSET;
          *in_FS_OFFSET = (int)&puStackY_48;
          iStackY_4c = 0x42a7c5;
          FUN_00425134(&local_30,local_c,local_16);
          if (local_30.n2.vt != local_16) {
            iStackY_4c = 0x42a7d4;
            FUN_00424210();
          }
          iStackY_4c = local_10;
          uVar4 = (**(code **)(*local_1c + 0x34))(local_1c,param_1,&local_30);
          local_11 = (&DAT_0067ce94)[(uVar4 & 0x7f) + local_10 * 2];
          *in_FS_OFFSET = iStackY_4c;
          puStackY_48 = (undefined1 *)0x42a80f;
          uVar4 = FUN_00424ab4(&local_30,iStackY_4c,puVar5);
          return uVar4;
        }
        uVar4 = (**(code **)(*local_1c + 0x34))(local_1c,param_1,local_c);
        local_11 = (&DAT_0067ce94)[(uVar4 & 0x7f) + local_10 * 2];
      }
    }
  }
  return (uint)local_11;
}
