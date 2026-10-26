// rea decompile_all
// name: FUN_006c5268
// address: 0x6c5268
// body: available
// range: 0x6c5268-0x6c548a inclusive
// range: 0x6c54f8-0x6c553d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6c52a2 (push 0x6c553e followed by fs-segment stack chaining); handler 0x6c553e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6c53cc (push 0x6c548b followed by fs-segment stack chaining); handler 0x6c548b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c5268(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar6;
  undefined4 *puVar7;
  undefined1 *puStack_cc;
  undefined1 *puStack_c8;
  undefined1 *puStack_c4;
  undefined4 uStack_c0;
  undefined1 *puStack_bc;
  undefined1 *puStack_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c [6];
  undefined1 local_81 [101];
  int *local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;

  puStack_b8 = &stack0xfffffffc;
  local_9c[0] = 0;
  local_a0 = 0;
  local_a4 = 0;
  local_a8 = 0;
  local_8 = 0;
  local_c = 0;
  puStack_bc = &LAB_006c553e;
  uStack_c0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_c0;
  puStack_c4 = (undefined1 *)0x6c52ad;
  local_10 = param_2;
  FUN_00406e5c(&local_8);
  if (local_10 != 0) {
    puStack_c4 = (undefined1 *)0x6c52bb;
    uVar2 = FUN_00406e5c(&local_8);
    puStack_c4 = (undefined1 *)0x6c52ca;
    cVar1 = FUN_006c8b84(local_10,"Signature",uVar2);
    if (cVar1 == '\0') {
      puStack_c4 = (undefined1 *)0x6c52d6;
      FUN_00406e5c(&local_8);
    }
  }
  iVar3 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 1)) {
    puStack_c4 = (undefined1 *)0x6c52f5;
    iVar3 = FUN_00407078(&local_8,local_8,0);
  }
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = *(undefined4 *)(iVar3 + -4);
  }
  puStack_c4 = (undefined1 *)0x6c530a;
  uVar4 = FUN_0040431c(0x80);
  puStack_c4 = (undefined1 *)0x6c531a;
  FUN_00404f08(uVar4,0x80,0);
  puStack_c4 = (undefined1 *)0x6c531f;
  puStack_c4 = (undefined1 *)BIO_f_base64();
  puStack_c8 = (undefined1 *)0x6c5325;
  local_18 = BIO_new();
  puStack_c8 = (undefined1 *)0x6c5332;
  puStack_c4 = (undefined1 *)uVar2;
  puStack_c8 = (undefined1 *)FUN_00407670(local_8);
  puStack_cc = (undefined1 *)0x6c5338;
  puStack_c4 = (undefined1 *)BIO_new_mem_buf();
  puStack_c8 = (undefined1 *)local_18;
  puStack_cc = (undefined1 *)0x6c5347;
  puVar5 = (undefined1 *)BIO_push();
  puStack_cc = puVar5;
  puStack_c8 = (undefined1 *)uVar4;
  puStack_c4 = (undefined1 *)uVar2;
  BIO_read();
  puStack_c8 = (undefined1 *)0x6c535d;
  puStack_c4 = puVar5;
  BIO_free_all();
  puStack_cc = local_81;
  puStack_c4 = (undefined1 *)0x1;
  puStack_c8 = *(undefined1 **)PTR_DAT_00781a10;
  local_14 = RSA_public_decrypt();
  puStack_c4 = (undefined1 *)0x6c5384;
  FUN_00404338(uVar4);
  puVar5 = puStack_b8;
  if (local_14 < 1) {
    *in_FS_OFFSET = uStack_c0;
    puStack_b8 = &LAB_006c5545;
    puStack_bc = (undefined1 *)0x6c5520;
    FUN_00406e5c(&local_a8,uStack_c0,puVar5);
    puStack_bc = (undefined1 *)0x6c5530;
    thunk_FUN_00406e80(&local_a4,3);
    puStack_bc = (undefined1 *)0x6c553d;
    FUN_00406e80(&local_c,2);
    return;
  }
  puStack_c4 = (undefined1 *)0x6c5398;
  uVar2 = FUN_006c8be0(local_10);
  puStack_c4 = (undefined1 *)0x6c53a6;
  uVar2 = FUN_006c903c(&PTR_LAB_006c8270,1,uVar2);
  puStack_c4 = (undefined1 *)0x6c53af;
  FUN_006c981c(uVar2);
  puStack_c4 = (undefined1 *)0x6c53b7;
  FUN_00406e5c(&local_c);
  puStack_c4 = (undefined1 *)0x6c53be;
  local_1c = (int *)FUN_006c98f8(uVar2);
  puStack_c8 = &LAB_006c548b;
  puStack_cc = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_cc;
  puStack_c4 = &stack0xfffffffc;
  while( true ) {
    cVar1 = FUN_006c9980(local_1c);
    uVar6 = cVar1 == '\0';
    if ((bool)uVar6) break;
    FUN_006c9908(local_1c,&local_8);
    FUN_004075ec(local_8,"Signature");
    if (!(bool)uVar6) {
      FUN_004080e4(local_9c,local_c);
      puVar7 = &local_a0;
      FUN_006c8b34(local_10,local_8,&local_a8,puVar7);
      FUN_004080e4(&local_a4,local_a8);
      FUN_00410684(local_a4,&LAB_006c5574,0,puVar7);
      FUN_004082dc(local_9c,local_a0);
      FUN_0040810c(&local_c,local_9c[0],0);
    }
  }
  *in_FS_OFFSET = puStack_cc;
  puStack_c4 = &DAT_006c5492;
  if (local_1c != (int *)0x0) {
    puStack_c8 = (undefined1 *)0x6c548a;
    (**(code **)(*local_1c + -4))(local_1c,1);
  }
  return;
}
