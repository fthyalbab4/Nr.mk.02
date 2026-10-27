// rea decompile_all
// name: FUN_004458ec
// address: 0x4458ec
// body: available
// range: 0x4458ec-0x445935 inclusive
// range: 0x44595e-0x4459d5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4458fd (push 0x4459d6 followed by fs-segment stack chaining); handler 0x4459d6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004458ec(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  int iVar3;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;

  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_004459d6;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  uVar2 = FUN_0042d288(*(undefined4 *)(in_stack_00000004 + -0x10),
                       *(undefined4 *)(in_stack_00000004 + -4));
  iVar3 = in_stack_00000004;
  FUN_004456f0();
  switch(**(undefined1 **)(in_stack_00000004 + -0xc)) {
  case 1:
    FUN_004457dc(*(undefined4 *)**(undefined4 **)(in_stack_00000004 + -4),uVar2,iVar3,
                 in_stack_00000004);
    break;
  case 2:
    FUN_00444538(*(undefined4 *)(in_stack_00000004 + -8),uVar2);
    break;
  case 3:
    FUN_0042ce70(*(undefined4 *)(in_stack_00000004 + -0xc),uVar2,&local_8);
    FUN_00444cb8(*(undefined4 *)(in_stack_00000004 + -8),local_8);
    break;
  case 6:
    FUN_00445748(uVar2);
    break;
  case 9:
    FUN_00444588(*(undefined4 *)(in_stack_00000004 + -8),uVar2,iVar3);
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004459dd;
  puStack_14 = (undefined1 *)0x4459d5;
  thunk_FUN_00406e5c(&local_8,uStack_18,puVar1);
  return;
}
