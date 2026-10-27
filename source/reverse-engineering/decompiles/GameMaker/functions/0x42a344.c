// rea decompile_all
// name: FUN_0042a344
// address: 0x42a344
// body: available
// range: 0x42a344-0x42a403 inclusive
// range: 0x42a40b-0x42a47e inclusive
// range: 0x42a486-0x42a51e inclusive
// range: 0x42a526-0x42a5b9 inclusive
// range: 0x42a5c1-0x42a668 inclusive
// range: 0x42a670-0x42a68d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42a3c0 (push 0x42a404 followed by fs-segment stack chaining); handler 0x42a404 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42a436 (push 0x42a47f followed by fs-segment stack chaining); handler 0x42a47f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42a4d6 (push 0x42a51f followed by fs-segment stack chaining); handler 0x42a51f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42a572 (push 0x42a5ba followed by fs-segment stack chaining); handler 0x42a5ba lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42a625 (push 0x42a669 followed by fs-segment stack chaining); handler 0x42a669 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042a344(ushort *param_1,ushort *param_2,undefined4 param_3)

{
  ushort uVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_4c;
  undefined1 *puStackY_48;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  _union_2683 local_34;
  int *local_24;
  int *local_20;
  ushort local_1c;
  ushort local_1a;
  undefined4 local_18;
  ushort *local_14;
  ushort *local_c;

  puVar4 = &stack0xfffffffc;
  puVar5 = &stack0xfffffffc;
  puVar6 = &stack0xfffffffc;
  puVar3 = &stack0xfffffffc;
  local_18 = param_3;
  local_14 = param_2;
  local_c = param_1;
  if ((*param_1 & 0xfff) < 0x10f) {
    cVar2 = FUN_0042c960(*param_2,&local_24);
    if (cVar2 == '\0') {
      FUN_00424220();
    }
    else {
      cVar2 = (**(code **)(*local_24 + 4))(local_24,local_c,local_18);
      if (cVar2 == '\0') {
        VariantInit((VARIANTARG *)&local_34.n2);
        puStackY_48 = (undefined1 *)*in_FS_OFFSET;
        *in_FS_OFFSET = &puStackY_48;
        uStackY_4c = 0x42a44a;
        FUN_004252bc(&local_34,local_14,*local_c);
        if (*local_c != local_34.n2.vt) {
          uStackY_4c = 0x42a45b;
          FUN_00424130();
        }
        uStackY_4c = 0x42a469;
        FUN_0042b2cc(local_c,&local_34,local_18);
        *in_FS_OFFSET = puStackY_48;
        FUN_004249d4(&local_34,puStackY_48,puVar5);
        return;
      }
      if (*local_c != local_1a) {
        VariantInit((VARIANTARG *)&local_34.n2);
        puStackY_48 = (undefined1 *)*in_FS_OFFSET;
        *in_FS_OFFSET = &puStackY_48;
        uStackY_4c = 0x42a3d2;
        FUN_004252bc(&local_34,local_c,local_1a);
        uStackY_4c = 0x42a3dd;
        FUN_00424d3c(local_c,&local_34);
        if (*local_c != local_1a) {
          uStackY_4c = 0x42a3ee;
          FUN_00424130();
        }
        *in_FS_OFFSET = puStackY_48;
        FUN_004249d4(&local_34,puStackY_48,puVar4);
        return;
      }
      (**(code **)(*local_24 + 0x2c))(local_24,local_c,local_14);
    }
  }
  else {
    cVar2 = FUN_0042c960(*param_1,&local_20);
    if (cVar2 == '\0') {
      FUN_00424220();
    }
    cVar2 = (**(code **)(*local_20 + 8))(local_20,local_14,local_18);
    if (cVar2 == '\0') {
      uVar1 = *local_14;
      if ((uVar1 & 0xfff) < 0x10f) {
        if (uVar1 != *local_c) {
          VariantInit((VARIANTARG *)&local_34.n2);
          puStackY_48 = (undefined1 *)*in_FS_OFFSET;
          *in_FS_OFFSET = &puStackY_48;
          uStackY_4c = 0x42a586;
          FUN_004252bc(&local_34,local_c,*local_14);
          uStackY_4c = 0x42a591;
          FUN_00424d3c(local_c,&local_34);
          if (*local_c != *local_14) {
            uStackY_4c = 0x42a5a4;
            FUN_00424130();
          }
          *in_FS_OFFSET = puStackY_48;
          FUN_004249d4(&local_34,puStackY_48,puVar6);
          return;
        }
        FUN_0042b2cc(local_c,local_14,local_18);
      }
      else {
        cVar2 = FUN_0042c960(uVar1,&local_24);
        if (cVar2 == '\0') {
          FUN_00424220();
        }
        else {
          cVar2 = (**(code **)(*local_24 + 4))(local_24,local_c,local_18);
          if (cVar2 == '\0') {
            FUN_00424220();
          }
          else {
            if (*local_c != local_1a) {
              puStackY_48 = (undefined1 *)0x42a61a;
              VariantInit((VARIANTARG *)&local_34.n2);
              puStackY_48 = &LAB_0042a669;
              uStackY_4c = *in_FS_OFFSET;
              *in_FS_OFFSET = &uStackY_4c;
              FUN_004252bc(&local_34,local_c,local_1a);
              FUN_00424d3c(local_c,&local_34);
              if (*local_c != local_1a) {
                FUN_00424130();
              }
              *in_FS_OFFSET = uStackY_4c;
              puStackY_48 = (undefined1 *)0x42a668;
              FUN_004249d4(&local_34,uStackY_4c,puVar3);
              return;
            }
            puStackY_48 = (undefined1 *)0x42a682;
            (**(code **)(*local_24 + 0x2c))(local_24,local_c,local_14);
          }
        }
      }
    }
    else {
      if (*local_14 != local_1c) {
        VariantInit((VARIANTARG *)&local_34.n2);
        puVar3 = &LAB_0042a51f;
        puStackY_48 = (undefined1 *)*in_FS_OFFSET;
        *in_FS_OFFSET = &puStackY_48;
        uStackY_4c = 0x42a4e8;
        FUN_004252bc(&local_34,local_14,local_1c);
        if (local_34.n2.vt != local_1c) {
          uStackY_4c = 0x42a4f7;
          FUN_00424130();
        }
        uStackY_4c = local_18;
        (**(code **)(*local_20 + 0x2c))(local_20,local_c,&local_34);
        *in_FS_OFFSET = uStackY_4c;
        puStackY_48 = (undefined1 *)0x42a51e;
        FUN_004249d4(&local_34,uStackY_4c,puVar3);
        return;
      }
      (**(code **)(*local_20 + 0x2c))(local_20,local_c,local_14);
    }
  }
  return;
}
