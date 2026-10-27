// rea decompile_all
// name: FUN_00442d74
// address: 0x442d74
// body: available
// range: 0x442d74-0x442eeb inclusive
// range: 0x442f50-0x442f6a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x442d8a (push 0x442f6b followed by fs-segment stack chaining); handler 0x442f6b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x442e53 (push 0x442eec followed by fs-segment stack chaining); handler 0x442eec lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00442d74(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uVar6;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_00442f6b;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x442d9e;
  iVar4 = FUN_0042be6c(*(undefined4 *)(in_stack_00000004 + -0x10),
                       *(undefined4 *)(in_stack_00000004 + -4));
  if (iVar4 == 0) {
    puStack_2c = (undefined1 *)in_stack_00000004;
    puStack_30 = (undefined1 *)0x442db0;
    FUN_00442830();
    puVar2 = puStack_2c;
    puStack_2c = (undefined1 *)0x442dbe;
    FUN_00443adc(*(undefined4 *)(in_stack_00000004 + -8),0xd,puVar2);
  }
  else {
    puStack_2c = (undefined1 *)0x442dd1;
    cVar3 = FUN_004061f8(iVar4,&PTR_FUN_0042eb04);
    if (cVar3 != '\0') {
      puStack_2c = (undefined1 *)0x442de7;
      cVar3 = FUN_004061f8(iVar4,&PTR_FUN_00435a84);
      if ((cVar3 == '\0') || ((*(byte *)(iVar4 + 0x24) & 4) != 0)) {
        uVar1 = *(undefined4 *)(*(int *)(in_stack_00000004 + -8) + 0x20);
        puStack_2c = (undefined1 *)0x442e48;
        FUN_004081e8(&local_8,*(undefined4 *)(*(int *)(in_stack_00000004 + -8) + 0x2c));
        puStack_30 = &LAB_00442eec;
        uStack_34 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_34;
        puStack_2c = &stack0xfffffffc;
        FUN_0040b914(*(int *)(in_stack_00000004 + -4) + 0x1a,&local_10);
        uVar6 = *(undefined4 *)(*(int *)(in_stack_00000004 + -8) + 0x2c);
        FUN_0040875c(*(int *)(in_stack_00000004 + -8) + 0x2c,3);
        if (*(char *)(in_stack_00000004 + -0x11) != '\0') {
          uVar5 = FUN_0042be6c(*(undefined4 *)(*(int *)(in_stack_00000004 + -8) + 0x20),
                               *(undefined4 *)(in_stack_00000004 + -4));
          *(undefined4 *)(*(int *)(in_stack_00000004 + -8) + 0x20) = uVar5;
        }
        FUN_00442000(*(undefined4 *)(in_stack_00000004 + -8),iVar4);
        *in_FS_OFFSET = &DAT_00442f84;
        *(undefined4 *)(*(int *)(in_stack_00000004 + -8) + 0x20) = uVar1;
        FUN_00408194(*(int *)(in_stack_00000004 + -8) + 0x2c,local_8,uVar6,&DAT_00442ef3);
        return;
      }
      puStack_2c = (undefined1 *)in_stack_00000004;
      puStack_30 = (undefined1 *)0x442e03;
      FUN_00442c30(iVar4,&local_c);
      if (local_c != 0) {
        puStack_2c = (undefined1 *)in_stack_00000004;
        puStack_30 = (undefined1 *)0x442e17;
        FUN_00442830();
        puVar2 = puStack_2c;
        puStack_2c = (undefined1 *)0x442e26;
        FUN_00441df8(*(undefined4 *)(in_stack_00000004 + -8),local_c,puVar2);
      }
    }
  }
  puVar2 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00442f72;
  puStack_24 = (undefined1 *)0x442f6a;
  thunk_FUN_004072fc(&local_10,3,puVar2);
  return;
}
