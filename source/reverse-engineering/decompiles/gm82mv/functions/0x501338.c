// rea decompile_all
// name: FUN_00501338
// address: 0x501338
// body: available
// range: 0x501338-0x501505 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x501355 (push 0x501506 followed by fs-segment stack chaining); handler 0x501506 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00501338(int *param_1,ushort param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 uVar5;
  ushort uVar6;
  undefined4 *in_FS_OFFSET;
  bool bVar7;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10;
  int local_c;
  ushort *local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = (ushort *)0x0;
  puStack_24 = &LAB_00501506;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  iVar3 = (**(code **)(*param_1 + 0xec))();
  if (iVar3 < 0) {
    bVar7 = true;
  }
  else {
    uVar6 = param_2;
    if ((ushort)(param_2 - 0x61) < 0x1a) {
      uVar6 = param_2 & 0xffdf;
    }
    uVar2 = *(ushort *)(param_1 + 0xc5);
    if ((ushort)(uVar2 - 0x61) < 0x1a) {
      uVar2 = uVar2 & 0xffdf;
    }
    bVar7 = uVar2 != uVar6;
  }
  if (bVar7) {
    if (param_2 == 0) {
      *(undefined2 *)(param_1 + 0xc5) = 0;
      (**(code **)(*param_1 + 0xf0))(param_1,0xffffffff);
    }
    else {
      if (*(char *)((int)param_1 + 0x316) == '\x01') {
        if ((ushort)(param_2 - 0x61) < 0x1a) {
          param_2 = param_2 & 0xffdf;
        }
        *(ushort *)(param_1 + 0xc5) = param_2;
      }
      else {
        if ((ushort)(param_2 - 0x61) < 0x1a) {
          param_2 = param_2 & 0xffdf;
        }
        *(ushort *)(param_1 + 0xc5) = param_2 + 0x20;
      }
      local_10 = (**(code **)(*(int *)param_1[0xab] + 0x14))();
      if (-1 < local_10 + -1) {
        local_c = 0;
        do {
          (**(code **)(*(int *)param_1[0xab] + 0xc))((int *)param_1[0xab],local_c,&local_8);
          puVar4 = local_8;
          if ((local_8 != (ushort *)0x0) && (local_8[-5] != 2)) {
            puVar4 = (ushort *)FUN_00407488(&local_8,local_8);
          }
          uVar6 = *puVar4;
          if ((ushort)(uVar6 - 0x61) < 0x1a) {
            uVar6 = uVar6 & 0xffdf;
          }
          uVar2 = *(ushort *)(param_1 + 0xc5);
          if ((ushort)(uVar2 - 0x61) < 0x1a) {
            uVar2 = uVar2 & 0xffdf;
          }
          if (uVar2 == uVar6) {
            puVar4 = local_8;
            if ((local_8 != (ushort *)0x0) && (local_8[-5] != 2)) {
              puVar4 = (ushort *)FUN_00407488(&local_8,local_8);
            }
            if (puVar4[1] == 0x3a) {
              (**(code **)(*param_1 + 0xf0))(param_1,local_c);
              break;
            }
          }
          local_c = local_c + 1;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
    }
    iVar3 = param_1[0xc4];
    if (iVar3 != 0) {
      uVar5 = FUN_00501330(param_1);
      FUN_00501a24(iVar3,uVar5);
    }
    FUN_00406268(param_1);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0050150d;
  puStack_24 = (undefined1 *)0x501505;
  thunk_FUN_004072d8(&local_8,uStack_28,puVar1);
  return;
}
