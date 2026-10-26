// rea decompile_all
// name: FUN_0042b860
// address: 0x42b860
// body: available
// range: 0x42b860-0x42b96b inclusive
// range: 0x42b973-0x42b9fa inclusive
// range: 0x42ba02-0x42baeb inclusive
// range: 0x42baf3-0x42bb8e inclusive
// range: 0x42bb96-0x42bc45 inclusive
// range: 0x42bc4d-0x42bc83 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42b90b (push 0x42b96c followed by fs-segment stack chaining); handler 0x42b96c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42b9b2 (push 0x42b9fb followed by fs-segment stack chaining); handler 0x42b9fb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42ba8f (push 0x42baec followed by fs-segment stack chaining); handler 0x42baec lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42bb44 (push 0x42bb8f followed by fs-segment stack chaining); handler 0x42bb8f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42bbe9 (push 0x42bc46 followed by fs-segment stack chaining); handler 0x42bc46 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0042b860(ushort *param_1,ushort *param_2,int param_3)

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
      local_11 = FUN_0042b434(1,0);
    }
    else if (uVar1 == 1) {
      local_11 = FUN_0042b448(2,0,param_3);
    }
    else {
      cVar3 = FUN_0042c960(*param_2,&local_20);
      if (cVar3 == '\0') {
        FUN_00424220();
      }
      else {
        cVar3 = (**(code **)(*local_20 + 4))(local_20,param_1,0xb);
        if (cVar3 == '\0') {
          VariantInit((VARIANTARG *)&local_30.n2);
          puStackY_48 = (undefined1 *)*in_FS_OFFSET;
          *in_FS_OFFSET = (int)&puStackY_48;
          iStackY_4c = 0x42b9c3;
          FUN_004252bc(&local_30,local_c,*param_1);
          if ((local_30.n2.vt & 0xfff) != *param_1) {
            iStackY_4c = 0x42b9d5;
            FUN_00424130();
          }
          iStackY_4c = 0x42b9e2;
          local_11 = FUN_0042b6b4(param_1,&local_30,local_10);
          *in_FS_OFFSET = (int)puStackY_48;
          uVar4 = FUN_004249d4(&local_30,puStackY_48,puVar5);
          return uVar4;
        }
        if (*param_1 != local_14) {
          VariantInit((VARIANTARG *)&local_30.n2);
          puVar5 = &LAB_0042b96c;
          puStackY_48 = (undefined1 *)*in_FS_OFFSET;
          *in_FS_OFFSET = (int)&puStackY_48;
          iStackY_4c = 0x42b91c;
          FUN_004252bc(&local_30,param_1,local_14);
          if ((local_30.n2.vt & 0xfff) != local_14) {
            iStackY_4c = 0x42b92f;
            FUN_00424130();
          }
          iStackY_4c = local_10;
          uVar4 = (**(code **)(*local_20 + 0x34))(local_20,&local_30,local_c);
          local_11 = (&DAT_00773f08)[(uVar4 & 0x7f) + local_10 * 2];
          *in_FS_OFFSET = iStackY_4c;
          puStackY_48 = (undefined1 *)0x42b96b;
          uVar4 = FUN_004249d4(&local_30,iStackY_4c,puVar5);
          return uVar4;
        }
        uVar4 = (**(code **)(*local_20 + 0x34))(local_20,param_1,local_c);
        local_11 = (&DAT_00773f08)[(uVar4 & 0x7f) + local_10 * 2];
      }
    }
  }
  else if (*param_2 == 0) {
    local_11 = FUN_0042b434(0,1);
  }
  else if (*param_2 == 1) {
    local_11 = FUN_0042b448(0,2,param_3);
  }
  else {
    cVar3 = FUN_0042c960(uVar1,&local_1c);
    if (cVar3 == '\0') {
      FUN_00424220();
    }
    else {
      cVar3 = (**(code **)(*local_1c + 8))(local_1c,local_c,0xb);
      if (cVar3 == '\0') {
        if ((*local_c & 0xfff) < 0x10f) {
          VariantInit((VARIANTARG *)&local_30.n2);
          puStackY_48 = (undefined1 *)*in_FS_OFFSET;
          *in_FS_OFFSET = (int)&puStackY_48;
          iStackY_4c = 0x42bb57;
          FUN_004252bc(&local_30,param_1,*local_c);
          if (*local_c != local_30.n2.vt) {
            iStackY_4c = 0x42bb68;
            FUN_00424130();
          }
          iStackY_4c = 0x42bb76;
          local_11 = FUN_0042b6b4(&local_30,local_c,local_10);
          *in_FS_OFFSET = (int)puStackY_48;
          uVar4 = FUN_004249d4(&local_30,puStackY_48,puVar6);
          return uVar4;
        }
        cVar3 = FUN_0042c960(*local_c,&local_20);
        if (cVar3 == '\0') {
          FUN_00424220();
        }
        else {
          cVar3 = (**(code **)(*local_20 + 4))(local_20,param_1,0xb);
          if (cVar3 == '\0') {
            FUN_00424220();
          }
          else {
            if (*param_1 != local_14) {
              puStackY_48 = (undefined1 *)0x42bbde;
              VariantInit((VARIANTARG *)&local_30.n2);
              puStackY_48 = &LAB_0042bc46;
              iStackY_4c = *in_FS_OFFSET;
              *in_FS_OFFSET = (int)&iStackY_4c;
              FUN_004252bc(&local_30,param_1,local_14);
              if (local_30.n2.vt != local_14) {
                FUN_00424130();
              }
              iVar2 = local_10;
              uVar4 = (**(code **)(*local_20 + 0x34))(local_20,&local_30,local_c);
              puVar5 = puStackY_48;
              local_11 = (&DAT_00773f08)[(uVar4 & 0x7f) + local_10 * 2];
              *in_FS_OFFSET = iVar2;
              puStackY_48 = (undefined1 *)0x42bc7a;
              iStackY_4c = 0x42bc45;
              uVar4 = FUN_004249d4(&local_30,iVar2,puVar5);
              return uVar4;
            }
            puStackY_48 = (undefined1 *)0x42bc5e;
            uVar4 = (**(code **)(*local_20 + 0x34))(local_20,param_1,local_c);
            local_11 = (&DAT_00773f08)[(uVar4 & 0x7f) + local_10 * 2];
          }
        }
      }
      else {
        if (*local_c != local_16) {
          VariantInit((VARIANTARG *)&local_30.n2);
          puVar5 = &LAB_0042baec;
          puStackY_48 = (undefined1 *)*in_FS_OFFSET;
          *in_FS_OFFSET = (int)&puStackY_48;
          iStackY_4c = 0x42baa1;
          FUN_004252bc(&local_30,local_c,local_16);
          if (local_30.n2.vt != local_16) {
            iStackY_4c = 0x42bab0;
            FUN_00424130();
          }
          iStackY_4c = local_10;
          uVar4 = (**(code **)(*local_1c + 0x34))(local_1c,param_1,&local_30);
          local_11 = (&DAT_00773f08)[(uVar4 & 0x7f) + local_10 * 2];
          *in_FS_OFFSET = iStackY_4c;
          puStackY_48 = (undefined1 *)0x42baeb;
          uVar4 = FUN_004249d4(&local_30,iStackY_4c,puVar5);
          return uVar4;
        }
        uVar4 = (**(code **)(*local_1c + 0x34))(local_1c,param_1,local_c);
        local_11 = (&DAT_00773f08)[(uVar4 & 0x7f) + local_10 * 2];
      }
    }
  }
  return (uint)local_11;
}
